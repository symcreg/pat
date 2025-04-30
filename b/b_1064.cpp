#include <iostream>
#include <string>
#include <set>
using namespace std;
int sum(const string &s){
	int ret = 0;
	for(int i = 0; i < s.size(); i++){
		ret += s[i] - '0';
	}
	return ret;
}
int main(){
	int n;
	cin>>n;
	string a;
	set<int> cnt;
	for(int i = 0; i < n; i++){
		cin>>a;
		cnt.insert(sum(a));
	}
	cout<<cnt.size()<<endl;
	int flag = 0;
	for(auto i : cnt){
		if(flag) cout<<" ";
		cout<<i;
		flag = 1;
	}
	return 0;
}