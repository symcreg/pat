#include <iostream>
#include <vector>
#include <set>
using namespace std;
bool graph[205][205];

int n, m;
void check(){
	
}
int main(){
	cin>>n>>m;
	int a, b;
	for(int i = 0; i < m; i++){
		cin>>a>>b;
		graph[a][b] = graph[b][a] = true;
	}
	int k;
	cin>>k;
	for(int i = 0; i < k; i++){
		int num, ver, f1 = 0, f2 = 0;
		cin>>num;
		vector<int> path;
		set<int> cnt;
		for(int j = 0; j < num; j++){
			cin>>ver;
			path.push_back(ver);
			cnt.insert(ver);
		}
		if(cnt.size() != n || path[0] != path[num - 1] || num - 1 != n) f1 = 1;
		for(int j = 0; j < num - 1; j++){
			if(graph[path[j]][path[j+1]] != true) f2 = 1;
		}
		if(f1 == 0 && f2 == 0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}