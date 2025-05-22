#include <iostream>
#include <map>
#include <set>
#include <iomanip>
using namespace std;
int main(){
	int n, m;
	cin>>n;
	map<int, int>couples;
	int a, b;
	for(int i = 0; i < n; i++){
		cin>>a>>b;
		couples[a] = b;
		couples[b] = a;
	}
	cin>>m;
	map<int, bool> guests;
	int g;
	for(int i = 0; i < m; i++){
		cin>>g;
		guests[g] = true;
	}
	set<int> single;
	for(auto guest : guests){
		if(guests.find(couples[guest.first]) == guests.end()){
			single.insert(guest.first);
		}
	}
	int flag = 0;
	cout<<single.size()<<endl;
	for(auto s : single){
		if(flag) cout<<" ";
		cout<<setw(5)<<setfill('0')<<s;
		flag = 1;
	}
	
	return 0;
}