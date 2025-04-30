#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	string s, f = "PATest";
	cin>>s;
	map<char, int> m;
	for(int i = 0; i < s.size(); i++){
		if(f.find(s[i]) != string::npos){
			m[s[i]]++;
		}
	}
	int cnt = 1;
	while(cnt){
		cnt = 0;
		for(int i = 0; i < f.size(); i++){
			if(m[f[i]] != 0){
				cout<<f[i];
				m[f[i]]--;
				cnt = 1;
			}
		}
	}
	return 0;
}