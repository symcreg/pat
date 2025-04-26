#include <iostream>
#include <string>
using namespace std;
bool is_prime(int n){
	if(n == 0 || n == 1) return false;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int l, k;
	cin>>l>>k;
	string s;
	cin>>s;
	int flag = 0;
	for(int i = 0; i <= l - k; i++){
		string t = s.substr(i, k);
		int num = stoi(t);
//		cout<<num<<endl;
		if(is_prime(num)){
			flag = 1;
			cout<<t;
			break;
		}
	}
	if(flag == 0){
		cout<<404;
	}
	return 0;
}