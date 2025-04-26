#include <iostream>
#include <map>
using namespace std;
int main(){
	string a, b;
	map<char, int> m;
	getline(cin, a);
	getline(cin, b);
	string c = a + b;
	for(int i = 0; i < c.size(); i++){
		if(m[c[i]] == 0){
			cout<<c[i];
			m[c[i]]++;
		}
	}
//	cout<<a<<endl<<b<<endl;
	return 0;
}