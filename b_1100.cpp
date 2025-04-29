#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	map<string, int> xiaoyou;
	for(int i = 0; i < n; i++){
		cin>>s;
		xiaoyou[s]++;
	}
	int m;
	cin>>m;
	map<string, int> laibin;
	int cnt = 0;
	int max_x = 1e10, max_l = 1e10;
	string max_sx, max_sl;
	for(int i = 0; i < m; i++){
		cin>>s;
		laibin[s] = stoi(s.substr(6, 8));
		if(laibin[s] < max_l){
			max_l = laibin[s];
			max_sl = s;
		}
		if(xiaoyou.find(s) != xiaoyou.end()){
			cnt++;
			if(laibin[s] < max_x){
				max_x = max_l;
				max_sx = s;
			}
		}
	}
	cout<<cnt<<endl;
	if(cnt > 0){
		cout<<max_sx;
	}else{
		cout<<max_sl;
	}
	return 0;
}