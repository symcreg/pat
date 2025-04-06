#include <iostream>
#include <string>
using namespace std;
int main(){
	string s, p1, p2;
	cin>>s;
	int pos = 0, n = 0;
	int i = 0;
	while(s[i]!='E'){
		pos++;
		i++;
	}
	p1 = s.substr(1,pos-1);
	n = stoi(s.substr(pos+1));
	
	if(s[0] == '-') cout<<"-";
	if(n < 0){
		n = -n;
		cout<<"0.";
		for(int i = 0; i < n - 1; i++){
			cout<<"0";
		}
		for(int i = 0; i < p1.size(); i++){
			if(p1[i]!='.'){
				cout<<p1[i];
			}
		}
	}else{
		for(i = 0; i < p1.size(); i++){
			
			if(p1[i]!='.'){
				cout<<p1[i];
			}
			if(i == n+1 && i+1!=p1.size()){
				cout<<".";
			}
		}
		if(i <= n){
			for(int j = 0; j < n - i + 2; j++){
				cout<<"0";	
			}
		}
		
	}
	return 0;
}