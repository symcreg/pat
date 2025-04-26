#include <iostream>
#include <map>
using namespace std;
int main(){
	int n, m;
	cin>>n>>m;
	map<int, int> cake;
	int max = -1;
	for(int i = 0; i < m; i++){
		int num;
		for(int j = 0; j < n; j++){
			cin>>num;
			cake[j] += num;
			if(cake[j] > max){
				max = cake[j];
			}
		}
	}
	cout<<max<<endl;
	int flag = 0;
	for(auto ca : cake){
		if(ca.second == max){
			if(flag) cout<<" ";
			cout<<ca.first+1;
			flag = 1;
		}
	}
	return 0;
}