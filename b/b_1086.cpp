#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	string s = to_string(a * b);
	reverse(s.begin(), s.end());
	cout<<stoi(s);
	return 0;
}