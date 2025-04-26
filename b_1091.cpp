#include <iostream>
#include <string>
using namespace std;
int main(){
	int m;
	cin>>m;
	int k = 0;
	for(int i = 0; i < m; i++){
		cin>>k;
		int flag = 0;
		for(int j = 1; j < 10 ;j++){
			int t = k * k * j;
			string k_s = to_string(k);
			string t_s = to_string(t);
			if(t_s.size() < k_s.size()) continue;
			string sub = t_s.substr(t_s.size() - k_s.size(), k_s.size());
			if(sub == k_s){
				cout<<j<<" "<<t<<endl;
				flag = 1;
				break;
			}
		}
		if(flag == 0) cout<<"No"<<endl;
	}
	return 0;
}