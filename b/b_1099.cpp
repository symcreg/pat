#include <iostream>

using namespace std;
bool is_prime(int n){
	if(n <= 3){
		return n > 1;
	}
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int is_sex_prime(int n){
	if(is_prime(n)){
		if(is_prime(n-6)){
			return n-6;
		}else if(is_prime(n+6)){
			return n+6;
		}else{
			return -1;
		}
	}else{
		return -1;
	}
}
int main(){
	int n;
	cin>>n;
	if(is_sex_prime(n) != -1){
		cout<<"Yes"<<endl<<is_sex_prime(n);
	}else{
		int i = n + 1;
		while(is_sex_prime(i) == -1){
			i++;
		}
		cout<<"No"<<endl<<i;
	}
	return 0;
}