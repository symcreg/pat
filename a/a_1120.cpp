#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;
int friend_id(const string& a){
	int suma = 0;
	for(int i = 0; i < a.size(); i++) suma += a[i] - '0';
	return suma;
}
int main(){
	int n;
	cin>>n;
	vector<string> nums(n);
	for(int i = 0; i < n; i++){
		cin>>nums[i];
	}
	set<int> ids;
	for(int i = 0; i < n; i++){
		ids.insert(friend_id(nums[i]));
	}
	cout<<ids.size()<<endl;
	int flag = 0;
	for(auto id : ids){
		if(flag) cout<<" ";
		cout<<id;
		flag = 1;
	}
	return 0;
}