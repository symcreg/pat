#include <iostream>
#include <string>
using namespace std;
bool is_prime(int n){
	if(n == 0 || n == 1) return false;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return false;
	}
	return true;
}
int main(){
	int l, k;
	cin>>l>>k;
	string s;
	cin>>s;
	for(int i = 0; i <= l - k; i++){
		string sub_s = s.substr(i, k);
//		if(sub_s.size() < k) break;
		int sub_n = stoi(sub_s);
		if(is_prime(sub_n)){
			cout<<sub_s;
			return 0;
		}
	}
	cout<<404<<endl;
	return 0;
}