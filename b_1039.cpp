#include <iostream>
#include <string>
using namespace std;
int main(){
	int cnt = 0;
	string s1, s2;
	cin>>s1>>s2;
	for(int i = 0; i < s2.size(); i++){
		if(s1.find(s2[i]) != string::npos){
			cnt++;
			s1[s1.find(s2[i])] = ' ';
		}
	}
	if(cnt < s2.size()){
		cout<<"No ";
		cout<<s2.size() - cnt;
	}else{
		cout<<"Yes ";
		cout<<s1.size() - cnt;
	}
	return 0;
}