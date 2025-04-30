#include <iostream>
#include <string>
using namespace std;
int main(){
	char type;
	cin>>type;
	string s;
	cin.ignore();
	getline(cin, s);
	int cnt = 1;
	if(type == 'C'){
		char pre = s[0];
		for(int i = 1; i < s.size(); i++){
			if(s[i] == pre){
				cnt++;
			}else{
				if(cnt >= 2) cout<<cnt;
				cout<<pre;
				cnt = 1;
				pre = s[i];
			}
		}
		if(cnt >= 2) cout<<cnt;
		cout<<pre;
	}else{
		string num;
		for(int i = 0; i < s.size(); i++){
			if(s[i] >= '0' && s[i] <= '9'){
				num += s[i];
			}else{
				if(num.size() > 0) cnt = stoi(num);
				for(int j = 0; j < cnt; j++){
					cout<<s[i];
				}
				cnt = 1;
				num = "";
			}
		}
	}
	return 0;
}