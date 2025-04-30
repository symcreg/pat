#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string rev(string s){
	reverse(s.begin(), s.end());
	return s;
}
string add(string s1, string s2){
	int carry = 0;
	string s = s1;
	for(int i = s1.size() - 1; i >= 0; i--){
		s[i] = (s1[i] - '0' + s2[i] - '0' + carry) % 10 + '0';
		carry = (s1[i] - '0' + s2[i] - '0' + carry) / 10;
	}
	if(carry) s = "1" + s;
	return s;
}
int main(){
	string s1, s2;
	cin>>s1;
	if(s1 == rev(s1)){
		cout<<s1<<" is a palindromic number.";
		return 0;
	}
	s2 = rev(s1);
	int n = 10;
	string sum;
	int flag = 0;
	while(n--){
		sum = add(s1, s2);
		cout<<s1<<" + "<<s2<<" = "<<sum<<endl;
		if(sum == rev(sum)){
			cout<<sum<<" is a palindromic number.";
			flag = 1;
			break;
		}
		s1 = sum;
		s2 = rev(sum);
	}
	if(flag == 0){
		cout<<"Not found in 10 iterations.";
	}
	return 0;
}