#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v[1005];
int in[1005];
int main(){
	int n, m, k;
	cin>>n>>m;
	int a, b;
	for(int i = 0; i < m; i++){
		cin>>a>>b;
		v[a].push_back(b);
		in[b]++;
	}
	cin>>k;
	int out = 0;
	for(int i = 0; i < k; i++){
		vector<int> in_t(in, in+n+1);
		int flag = 1;
		for(int j = 0; j < n; j++){
			cin>>a;
			if(in_t[a] != 0) flag = 0;
			for(auto b : v[a]){
				in_t[b]--;
			}
		}
		if(flag) continue;
		if(out) cout<<" ";
		if(flag == 0) cout<<i;
		out = 1;
	}
	return 0;
}