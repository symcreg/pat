#include <iostream>
#include <vector>
using namespace std;
int tree[1005], n;
vector<int> path;
void dfs(int idx){
	if(2 * idx + 1 > n && 2 * idx > n){ // leaf
		if(idx <= n){
			for(int i = 0; i < path.size(); i++){
				cout<<tree[path[i]];
				if(i != path.size() - 1) cout<<" ";
			}
			cout<<endl;
		}
	}else{
		path.push_back(2 * idx + 1);
		dfs(2 * idx + 1);
		path.pop_back();
		path.push_back(2 * idx);
		dfs(2 * idx);
		path.pop_back();
	}
}
int main(){
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>tree[i];
	}
	path.push_back(1);
	dfs(1);
	int is_max = 1, is_min = 1;
	for(int i = 2; i <= n; i++){
		if(tree[i / 2] > tree[i]) is_min = 0;
		if(tree[i / 2] < tree[i]) is_max = 0;
	}
	if(is_min == 1){
		cout<<"Min Heap";
	}else if(is_max == 1){
		cout<<"Max Heap";
	}else{
		cout<<"Not Heap";
	}
	return 0;
}