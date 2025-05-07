#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int m, n, tree[1005], cnt = 0;
void dfs(int idx){
	if(idx > n) return;
//	if(idx * 2 > n && idx * 2 + 1 > n){
//		if(idx <= n){
//			return;
//		}
//	}
	dfs(2 * idx);
	dfs(2 * idx + 1);
	cout<<tree[idx];
	cnt++;
	if(cnt < n) cout<<" ";
}
int main(){
	cin>>m>>n;
	for(int i = 0; i < m; i++){
		cnt = 0;
		fill(tree, tree + 1005, 0);
		for(int j = 1; j <= n; j++){
			cin>>tree[j];
		}
		int is_min = 1, is_max = 1;
		for(int j = 2; j <= n; j++){
			if(tree[j / 2] > tree[j]) is_min = 0;
			if(tree[j / 2] < tree[j]) is_max = 0;
		}
		if(is_min == 1) cout<<"Min Heap"<<endl;
		else if(is_max == 1) cout<<"Max Heap"<<endl;
		else cout<<"Not Heap"<<endl;
		dfs(1);
		cout<<endl;
	}
	return 0;
}