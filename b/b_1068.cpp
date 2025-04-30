#include <iostream>
#include <vector>
#include <map>
using namespace std;
int m, n, tol;
vector<vector<int>> v;
int dir[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,0},{1,-1},{1,1}};
bool is_unique(int i, int j){
	for(int k = 0; k < 8; k++){
		int tx = i + dir[k][0];
		int ty = j + dir[k][1];
		if(tx >= 0 && tx < n && ty >=0 && ty < m && abs(v[i][j] - v[tx][ty]) <= abs(tol)){
			return false;
		}
	}
	return true;
}
int main(){
	cin>>m>>n>>tol;
	v.resize(n, vector<int>(m));
	map<int, int> mapp;
	int cnt = 0;
	int ret_x = 0, ret_y = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>v[i][j];
			mapp[v[i][j]]++;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(mapp[v[i][j]] == 1 && is_unique(i, j)){
				cnt++;
				ret_x = i + 1;
				ret_y = j + 1;
			}
		}
	}
	if(cnt == 0){
		cout<<"Not Exist";
	}else if(cnt > 1){
		cout<<"Not Unique";
	}else{
		cout<<"("<<ret_y<<", "<<ret_x<<"): "<<v[ret_x-1][ret_y-1];
	}
	
	return 0;
}