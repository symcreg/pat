#include <iostream>
#include <map>
using namespace std;
bool is_prime(int id){
	if (id <= 1) return false;
	for(int i = 2; i * i <= id; i++){
		if(id % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n, k;
	string s;
	cin>>n;
	map<int, int> m;
	int id = 0;
	for(int i = 0; i < n; i++){
		cin>>id;
		m[id] = i + 1;
	}
	cin>>k;
	for(int i = 0; i < k; i++){
		cin>>s;
		id = stoi(s);
		cout<<s<<": ";
		if(m.find(id) == m.end()){
			cout<<"Are you kidding?"<<endl;
			continue;
		}
		if(m[id] == -1){
			cout<<"Checked"<<endl;
			continue;
		}
		if(m[id] == 1){
			m[id] = -1;
			cout<<"Mystery Award"<<endl;
		}else if(is_prime(m[id])){
			m[id] = -1;
			cout<<"Minion"<<endl;
		}else{
			m[id] = -1;
			cout<<"Chocolate"<<endl;
		}
	}
	return 0;
}