#include <iostream>

using namespace std;
int main(){
	int n, m;
	cin>>n>>m;
	int max = -1;
	int flag = 0;
	for(int i = 0; i < n; i++){
		int sub_max = -1;
		int t = 0;
		for(int j = 0; j < m; j++){
			cin>>t;
			if(t > sub_max){
				sub_max = t;
			}
			if(t > max){
				max = t;
			}
		}
		if(flag) cout<<" ";
		cout<<sub_max;
		flag = 1;
	}
	cout<<endl;
	cout<<max;
	
	return 0;
}