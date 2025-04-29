#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	int n, m;
	cin>>n>>m;
	map<int, vector<int>> thlist1;
	map<int, vector<int>> thlist2;
	for(int i = 0; i < n; i++){
		int th1, th2;
		cin>>th1>>th2;
		thlist1[th1].push_back(th2);
		thlist2[th2].push_back(th1);
	}
	for(int i = 0; i < m; i++){
		int x, th;
		cin>>x;
		map<int, int> thlist;
		for(int j = 0; j < x; j++){
			cin>>th;
			thlist[th]++;
		}
//		cout<<thlist.size()<<endl;
		int pass = 1;
		for(auto tmp : thlist){
			if(pass == 0) break;
			int th = tmp.first;
//			cout<<"th:"<<th<<endl;
			int forbid = 0;
			if(thlist1.find(th) != thlist1.end()){
				if(pass == 0) break;
				for(int k = 0; k < thlist1[th].size(); k++){
					forbid = thlist1[th][k];
					if(thlist.find(forbid) != thlist.end()){
//						cout<<"forbid:"<<forbid<<endl;
						pass = 0;
						break;
					}
				}
			}
			if(pass == 0) break;
			if(thlist2.find(th) != thlist2.end()){
				if(pass == 0) break;
				for(int k = 0; k < thlist2[th].size(); k++){
					forbid = thlist2[th][k];
					if(thlist.find(forbid) != thlist.end()){
//						cout<<"forbid:"<<forbid<<endl;
						pass = 0;
						break;
					}
				}
			}
		}
		if(pass) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}