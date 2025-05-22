#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> graph;
vector<bool> visited;
int cnt = 0;
void dfs(int idx){
	visited[idx] = true;
	cnt++;
	for(int i = 0; i < graph[idx].size(); i++){
		if(!visited[graph[idx][i]]){
			dfs(graph[idx][i]);
		}
	}
}
int main(){
	int n, m;
	cin>>n>>m;
	graph.resize(n+1);
	visited.resize(n+1);
	int a, b;
	for(int i = 0; i < m; i++){
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	int even = 0;
	for(int i = 1; i <= n; i++){
		if(graph[i].size() % 2 == 0) even++;
		if(i != 1) cout<<" ";
		cout<<graph[i].size();
	}
	cout<<endl;
	dfs(1);
	if(cnt == n && even == n){
		cout<<"Eulerian";
	}else if(cnt == n && even == n - 2){
		cout<<"Semi-Eulerian";
	}else{
		cout<<"Non-Eulerian";
	}
	return 0;
}