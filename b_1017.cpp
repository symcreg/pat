#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	int b, q=0, r=0;
	cin>>s>>b;
	q = (s[0] - '0') / b;
	if(q != 0 || s.size() == 1){
		cout<<q;
	}
	r = (s[0] - '0') % b;
	for(int i = 1; i < s.size(); i++){
		q = (r * 10 + (s[i] - '0')) / b;
		r = (r * 10 + (s[i] - '0')) % b;
		cout<<q;
	}
	cout<<" "<<r;
	return 0;
}