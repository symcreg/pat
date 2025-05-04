#include <iostream>
#include <vector>
using namespace std;
vector<int> nodes[100];
int book[100], max_dep = -1;
void dfs(int idx, int depth){
	if(nodes[idx].size() == 0){ // leaf
		book[depth]++;
		if(depth > max_dep) max_dep = depth;
		return;
	}
	for(int i = 0; i < nodes[idx].size(); i++){
		dfs(nodes[idx][i], depth + 1); // child
	}
}
int main(){
	int n, m;
	cin>>n>>m;
	for(int i = 0; i < m; i++){
		int id, k;
		cin>>id>>k;
		for(int j = 0; j < k; j++){
			 int sub_id;
			 cin>>sub_id;
			 nodes[id].push_back(sub_id);
		}
	}
	dfs(1, 0);
	cout<<book[0];
	for(int i = 1; i <= max_dep; i++){
		cout<<" "<<book[i];
	}
	
	return 0;
}