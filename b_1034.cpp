#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1, s2;
	int n[4];
	cin>>s1>>s2;
	int i = 0;
	for(i = 0; i < s1.size(); i++){
		if(s1[i] == '/'){
			break;
		}
	}
	n[0] = stoi(s1.substr(0, i));
	n[1] = stoi(s1.substr(i+1));
	for(i = 0; i < s2.size(); i++){
		if(s2[i] == '/'){
			break;
		}
	}
	n[2] = stoi(s2.substr(0, i));
	n[3] = stoi(s2.substr(i+1));
//	for(i = 0; i < 4; i++){
//		cout<<n[i]<<endl;
//	}
	
	return 0;
}