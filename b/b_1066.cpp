#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
	int m, n, a, b, t;
	cin>>m>>n>>a>>b>>t;
	vector<int> v(m*n);
	for(int i = 0; i < m * n; i++){
		cin>>v[i];
		if(v[i] >= a && v[i] <= b){
			v[i] = t;
		}
	}
	for(int i = 0; i < m; i++){
		int flag = 0;
		for(int j = 0; j < n; j++){
			if(flag) cout<<" ";
			cout<<setw(3)<<setfill('0')<<v[n*i+j];
			flag = 1;
		}
		cout<<endl;
	}
	return 0;
}