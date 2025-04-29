#include <iostream>
#include <string>
using namespace std;
string str = "String";
int a[200] = {0};
int main(){
	string s;
	cin>>s;
	for(int i = 0; i < s.size(); i++){
		a[s[i]]++;
	}
	int flag = 1;
	while(flag){
		flag = 0;
		for(int i = 0; i < 6; i++){
			if(a[str[i]]){
				cout<<str[i];
				a[str[i]]--;
				flag = 1;
			}
		}
	}
	return 0;
}