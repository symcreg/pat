#include <iostream>
#include <string>
using namespace std;
struct Node{
	int l, r;
};
Node tree[25 * 4];
int child[25 * 4];
int max_n = -1;
int last = 0;
int conv(string s){
	if(s == "-") return -1;
	else return stoi(s);
}
void dfs(int root, int idx){
	if(idx > max_n){
		max_n = idx;
		last = root;
	}
	if(tree[root].l != -1) dfs(tree[root].l, 2 * idx);
	if(tree[root].r != -1) dfs(tree[root].r, 2 * idx + 1);
}
int main(){
	int n;
	cin>>n;
	string a, b;
	int l, r;
	for(int i = 0; i < n; i++){
		cin>>a>>b;
		l = conv(a);
		r = conv(b);
		tree[i].l = l;
		tree[i].r = r;
		if(l != -1) child[l] = 1;
		if(r != -1) child[r] = 1;
	}
	int root = 0;
	while(child[root] != 0) root++;
	dfs(root, 1);
	if(max_n == n){
		cout<<"YES "<<last;
	}else{
		cout<<"NO "<<root;
	}
	return 0;
}