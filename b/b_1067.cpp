#include <iostream>
#include <string>
using namespace std;
int main(){
	string pswd;
	int n;
	cin>>pswd>>n;
	cin.ignore();
	string s;
	int cnt = 0;
	while(1){
//		cin>>s;
		getline(cin, s);
		if(s.size() == 1 && s[0] == '#') break;
		if(cnt < n && s == pswd){
			cout<<"Welcome in"<<endl;
			break;
		}
		if(s != pswd){
			cout<<"Wrong password: "<<s<<endl;
			cnt++;
		}
		if(cnt >= n){
			cout<<"Account locked"<<endl;
			break;
		}
		
	}
	return 0;
}