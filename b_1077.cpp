#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n, m;
	cin>>n>>m;
	for(int i = 0; i < n; i++){
		int g2 = 0;
		cin>>g2;
		vector<int> g1v;
		int num = n-1;
		for(int j = 0; j < n-1; j++){
			int t;
			cin>>t;
//			cout<<"|"<<t<<"|";
			if(t > m || t < 0) num--;
			else g1v.push_back(t);
		}
		sort(g1v.begin(),g1v.end());
		int sum = 0;
		for(int j = 1; j < num - 1; j++){
			sum += g1v[j];
		}
//		cout<<num<<endl;
		double g1 = sum / double(num-2);
//		cout<<g1<<endl;
		cout<<int((g1+g2)/2.0 + 0.5)<<endl;;
	}
	return 0;
}