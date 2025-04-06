#include <iostream>
#include <string>
using namespace std;
int a[1005];
int main(){
	int n, max = -1, max_id;
	cin >> n;
	string s;
	cin.ignore();
	for(int i = 0; i < n; i++){
		getline(cin, s);
		int pos = stoi(s.substr(0, s.find('-')));
		a[pos] += stoi(s.substr(s.find(' ')+1));
		if(a[pos] > max){
			max = a[pos];
			max_id = pos;
		}
	}
	cout<<max_id<<" "<<a[max_id];
	
	return 0;
}