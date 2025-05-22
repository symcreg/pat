#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
bool is_prime(int x){
	if(x == 1 || x == 2) return false;
	for(int i = 2; i * i <= x; i++){
		if(x % i == 0) return false;
	}
	return true;
}
int main(){
	int n, id, k;
	cin>>n;
	map<int, int> rk;
	for(int i = 0; i < n; i++){
		cin>>id;
		rk[id] = i + 1;
	}
	cin>>k;
	map<int, bool> checked;
	for(int i = 0; i < k; i++){
		cin>>id;
		cout<<setw(4)<<setfill('0')<<id<<": ";
		if(rk.find(id) == rk.end()){
			cout<<"Are you kidding?"<<endl;
			continue;
		}
		if(checked[id] == true){
			cout<<"Checked"<<endl;
			continue;
		}
		if(rk[id] == 1){
			cout<<"Mystery Award"<<endl;
		}else if(is_prime(rk[id])){
			cout<<"Minion"<<endl;
		}else{
			cout<<"Chocolate"<<endl;
		}
		checked[id] = true;
	}
	
	return 0;
}