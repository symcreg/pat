#include <iostream>
using namespace std;
bool is_prime(int n){
	for(int i = 2; i * i <= n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n, cnt=0;
	cin >> n;
	for(int i = 5; i <= n; i++){
		if(is_prime(i-2) && is_prime(i)){
			cnt++;
		}
	}
	cout<<cnt;
}