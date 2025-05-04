#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> nodes[10000];
int main(){
	int n;
	cin>>n;
	cin.ignore();
	string id_s;
	int dep = 0, id;
	for(int i = 0; i < n; i++){
		getline(cin, id_s);
		for(dep = 0; id_s[dep] == ' '; dep++);
		id = stoi(id_s);
//		cout<<dep<<" "<<id<<endl;
		nodes[dep].push_back(id);
	}
	return 0;
}