#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
	string s1, s2;
	int index = 0;
	cin>>s1>>s2;
	map<char, int> m;
	for(int i = 0; i < s2.size(); i++){
		while(s1[index]!=s2[i]){
			if(s1[index] >= 'a' && s1[index] <= 'z'){
				s1[index] = s1[index] - 'a' + 'A';
			}
			m[s1[index]]++;
			if(m[s1[index]]<=1){
				cout<<s1[index];
			}
			index++;
		}
		index++;
	}
	if(index < s1.size()){
		for(int i = index; i < s1.size(); i++){
			if(s1[i] >= 'a' && s1[i] <= 'z'){
				s1[i] = s1[i] - 'a' + 'A';
			}
			m[s1[i]]++;
			if(m[s1[i]]<=1){
				cout<<s1[i];
			}
		}
	}
}