#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	if(s.size() % 2 != 0) cout<<"Error: "<<s.size()<<" digit(s)";
	else{
		int half = s.size() / 2;
		int flag = 0;
		for(int i = 0; i < half - 1; i++){
			if(s[i] != s[half + i]){
				flag = 1;
				break;
			}
		}
		if((s[s.size() - 1] - s[half - 1] == 2) && flag == 0){
			cout<<"Yes: "<<s.substr(half, half)<<" - "<<s.substr(0, half)<<" = 2";
		}else{
			cout<<"No: "<<s.substr(half, half)<<" - "<<s.substr(0, half)<<" != 2";
		}
	}
	return 0;
}