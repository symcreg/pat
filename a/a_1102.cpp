#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
struct Node{
	int left, right;	
} tree[15];
void invert(int idx){
	if(idx == -1) return;
	int tmp = tree[idx].left;
	tree[idx].left = tree[idx].right;
	tree[idx].right = tmp;
	
	invert(tree[idx].left);
	invert(tree[idx].right);
	
}
void level_order(int root){
	queue<int> q;
	q.push(root);
	while(!q.empty()){
		if(q.front() != root) cout<<" ";
		cout<<q.front();
		Node node = tree[q.front()];
		q.pop();
		if(node.left != -1) q.push(node.left);
		if(node.right != -1) q.push(node.right);
	}
	
}
void in_order(int idx){
	static int flag = 0;
	if(idx == -1) return;
	in_order(tree[idx].left);
	if(flag) cout<<" ";
	cout<<idx;
	flag = 1;
	in_order(tree[idx].right);
}
int main(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		string ls, rs;
		cin>>ls>>rs;
		if(ls != "-") tree[i].left = stoi(ls);
		else tree[i].left = -1;
		if(rs != "-") tree[i].right = stoi(rs);
		else tree[i].right = -1;
	}
	int root = 0;
	int have_parent[15] = {0};
	for(int i = 0; i < n; i++){
		if(tree[i].left != -1) have_parent[tree[i].left] = 1;
		if(tree[i].right != -1) have_parent[tree[i].right] = 1;
	}
	while(have_parent[root] != 0) root++;
//	cout<<root<<endl;
	invert(root);
	level_order(root);
	cout<<endl;
	in_order(root);
	return 0;
}