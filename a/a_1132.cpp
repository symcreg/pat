#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	int num, n1, n2;
	for(int i = 0; i < n; i++){
		cin>>s;
		num = stoi(s);
		n1 = stoi(s.substr(0, s.size() / 2));
		n2 = stoi(s.substr(s.size() / 2));
		if(n1 * n2 != 0 && num % (n1 * n2) == 0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}