#include <iostream>
#include <string>
#include <map>
using namespace std;
struct Person{
	string id;
	int code;
};
int main(){
	int n, m;
	cin >> n;
	map<int, Person> map;
	int t = 0;
	Person p;
	for(int i = 0; i < n; i++){
		cin>>p.id>>t>>p.code;
		map[t].id = p.id;
		map[t].code = p.code;
	}
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> t;
		cout<<map[t].id<<" "<<map[t].code<<endl;
	}
	return 0;
}