#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string add(string s1, string s2){
	string ret = s1;
	int carry = 0;
	for(int i = s1.size() - 1; i >= 0; i--){
		ret[i] = (s1[i] - '0' + s2[i] - '0' + carry) % 10 + '0';
		carry = (s1[i] - '0' + s2[i] - '0' + carry) / 10;
	}
	if(carry) ret = "1" + ret;
	return ret;
}
bool check(string& s){
	string s_hat = s;
	reverse(s_hat.begin(), s_hat.end());
	return s == s_hat;
}
int main(){
	string s;
	cin>>s;
	int cnt = 0;
	while(!check(s) && cnt < 10){
		string s_r = s;
		reverse(s_r.begin(), s_r.end());
		cout<<s<<" + "<<s_r<<" = ";
		s = add(s, s_r);
		cout<<s<<endl;
		cnt++;
	}
	if(cnt < 10) cout<<s<<" is a palindromic number.";
	else cout<<"Not found in 10 iterations.";
	return 0;
}