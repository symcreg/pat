#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int conv(char c){
	if(c >= '0' && c <= '9'){
		return c - '0';
	}else{
		return c - 'a' + 10;
	}
}
char deconv(int d){
	char res;
	if(d >= 0 && d <= 9){
		res = d + '0';
	}else{
		res = d - 10 + 'a';
	}
	return res;
}

int main(){
	string s1, s2;
	cin>>s1>>s2;
	if(s1.size() > s2.size()) swap(s1, s2);
	string prefix(s2.size() - s1.size(), '0');
	s1 = prefix + s1;
//	cout<<s1<<" "<<s2;
	int carry = 0;
	string res(s1.size(), '0');
	for(int i = s1.size() - 1; i >= 0; i--){
		int d1 = conv(s1[i]);
		int d2 = conv(s2[i]);
		res[i] = deconv((d1 + d2 + carry) % 30);
		carry = (d1 + d2 + carry) / 30;
	}
	if(carry) res = "1" + res;
	int idx = 0;
	while(res[idx] == '0' && idx < res.size() - 1) idx++;
	for(int i = idx; i < res.size(); i++){
		cout<<res[i];
	}
//	cout<<res;
}