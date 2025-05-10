#include <iostream>
#include <string>
using namespace std;
struct Node{
	string data;
	int left;
	int right;
};
Node list[25];
int n;
bool is_child[25] = {false};
string dfs(int idx){
	if(list[idx].left == -1 && list[idx].right == -1) return list[idx].data; // leaf
	if(list[idx].left == -1 && list[idx].right != -1) return "(" + list[idx].data + dfs(list[idx].right) + ")";
	if(list[idx].left != -1 && list[idx].right != -1) return "(" + dfs(list[idx].left) + list[idx].data + dfs(list[idx].right) + ")";
}
int main(){
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>list[i].data>>list[i].left>>list[i].right;
		
		if(list[i].left != -1) is_child[list[i].left] = true;
		if(list[i].right != -1) is_child[list[i].right] = true;
	}
	int root = 1;
	while(is_child[root] == true) root++;
//	cout<<root<<endl;
	string str = dfs(root);
	if(str[0] == '(') str = str.substr(1, str.size() - 2);
	cout<<str;
	return 0;
}