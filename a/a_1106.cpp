#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;
vector<vector<int>> supplier;
int min_depth = 99999999, min_num = 0;
void dfs(int root, int depth){
	if(min_depth < depth) return;
	if(supplier[root].size() == 0){
		if(depth == min_depth){
			min_num++;
		}else if(depth < min_depth){
			min_depth = depth;
			min_num = 1;
		}
	}
	for(int i = 0; i < supplier[root].size(); i++){
		dfs(supplier[root][i], depth + 1);
	}
}
int main(){
	int n;
	double p, r;
	cin>>n>>p>>r;
	supplier.resize(n);
	for(int i = 0; i < n; i++){
		int k;
		cin>>k;
		int id;
		for(int j = 0; j < k; j++){
			cin>>id;
			supplier[i].push_back(id);
		}
	}
	dfs(0, 0);
	cout<<fixed<<setprecision(4)<<p * pow(1 + r / 100, min_depth)<<" "<<min_num;
//	cout<<min_depth<<" "<<min_num;
	return 0;
}