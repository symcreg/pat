#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;
struct Node{
	int val;
	Node* left;
	Node* right;
	Node(int v) : val(v), left(nullptr), right(nullptr){};
};
int post[35], in[35], tree[30 * 5], n;
map<int, int> in_idx;
Node* build(int pr, int il, int ir){
	if(il > ir) return nullptr;
	int root_val = post[pr];
	Node* root = new Node(root_val);
	int root_idx = in_idx[root_val];
	int right_size = ir - root_idx;
	
	root->right = build(pr - 1, root_idx + 1, ir);
	root->left = build(pr - right_size - 1, il, root_idx - 1);
	return root;
}
void zigzagging(Node* root){
	queue<Node*> q;
	q.push(root);
	bool l2r = false;
	int flag = 0;
	while(!q.empty()){
		int size = q.size();
		vector<int> level(size);
		for(int i = 0; i < size; i++){
			Node* node = q.front(); q.pop();
			int idx;
			if(l2r) idx = i;
			else idx = size - 1 - i;
			level[idx] = node->val;
			if(node->left) q.push(node->left);
			if(node->right) q.push(node->right);
		}
		for(int val : level){
			if(flag) cout<<" ";
			cout<<val;
			flag = 1;
		}
		l2r = !l2r;
	}
}
int main(){
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>in[i];
		in_idx[in[i]] = i;
	}
	for(int i = 0; i < n; i++) cin>>post[i];
	Node* root = build(n-1, 0, n-1);
	zigzagging(root);
	return 0;
}