#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
using namespace std;
int main(){
	int n, m;
	cin>>n>>m;
	map<int, int> forbid;
	for(int i = 0; i < m; i++){
		int id;
		cin>>id;
		forbid[id]++;
	}
	int cnt1 = 0, cnt2 = 0;
	for(int i = 0; i < n; i++){
		string name;
		int k;
		cin>>name>>k;
		int t;
		vector<int> f;
		for(int j = 0; j < k; j++){
			cin>>t;
			if(forbid[t]){
				cnt2++;
				f.push_back(t);
			}
		}
		if(f.size()!=0){
			cnt1++;
			cout<<name<<":";
			for(int j = 0;j < f.size(); j++){
				cout<<" "<<setw(4)<<setfill('0')<<f[j];
			}
			cout<<endl;
		}
	}
	cout<<cnt1<<" "<<cnt2;
	return 0;
}