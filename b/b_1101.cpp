#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string s;
	int n;
	cin>>s>>n;
	string s_r = s;
	reverse(s_r.begin(), s_r.end());
	reverse(s_r.begin(), s_r.begin() + n);
	reverse(s_r.begin() + n, s_r.end());
//	cout<<s<<" "<<s_r<<endl;
	int n1 = stoi(s);
	int n2 = stoi(s_r);
	cout<<fixed<<setprecision(2)<<n2 * 1.0 / n1;
	return 0;
}