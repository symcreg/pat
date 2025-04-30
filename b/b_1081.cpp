#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	string s;
	int cnt = 0;
	
	for(int i = 0; i < n; i++){
		getline(cin, s);
		int num = 0;
		int alpha = 0;
		int dot = 0;
		int legal = 1;
		if(s.size() < 6){
			cout<<"Your password is tai duan le."<<endl;
			continue;
		}
		for(int j = 0; j < s.size(); j++){
			if((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z')){
				alpha = 1;
			}else if(s[j] >= '0' && s[j] <= '9'){
				num = 1;
			}else if(s[j] == '.'){
				dot = 1;
			}else{
				legal = 0;
				cout<<"Your password is tai luan le."<<endl;
				break;
			}
		}
		if(legal == 0){
			continue;
		}else{
			if(alpha == 1 && num == 0){
				cout<<"Your password needs shu zi."<<endl;
			}else if(alpha == 0 && num == 1){
				cout<<"Your password needs zi mu."<<endl;
			}else{
				cout<<"Your password is wan mei."<<endl;
			}
		}
	}
	return 0;
}