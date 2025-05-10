#include <iostream>
#include <map>
#include <vector>
using namespace std;
vector<int> pre, in;
map<int, int> in_idx;
bool is_printed = false;
void build(int pl, int il, int ir){
	if(il > ir || is_printed) return;
	int root_val = pre[pl];
//	tree[pos] = root_val;
	
	int root_idx = in_idx[root_val];
	int left_size = root_idx - il;
	
	build(pl + 1, il, root_idx - 1);
	build(pl + left_size + 1, root_idx + 1, ir);
	if(is_printed == false){
		cout<<root_val;
		is_printed = true;
	}
}
int main(){
	int n;
	cin>>n;
	pre.resize(n);
	in.resize(n);
	for(int i = 0; i < n; i++) cin>>pre[i];
	for(int i = 0; i < n; i++){
		cin>>in[i];
		in_idx[in[i]] = i;
	}
	build(0, 0, n - 1);
	return 0;
}
