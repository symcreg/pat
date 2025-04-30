#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool is_prime(int n){
	if(n <= 2) return false;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int k, m;
		cin>>k>>m;
		int a = 1;
		for(int j = 1; j < k; j++) a *= 10;
		int tmp = a;
		for(int j = a; j < a*10; j++){
			int a_cp = j;
			tmp = a_cp;
			int sum_a = 0;
			while(a_cp != 0){
				sum_a += a_cp % 10;
				a_cp /= 10;
			}
			if(sum_a == m){
				break;
			}
		}
		vector<int> digits;
		while(tmp != 0){
			digits.push_back(tmp % 10);
			tmp /= 10;
		}
		sort(digits.begin(), digits.end());
		do{
			if(digits[0] == 0) continue;
			int num = 0;
			for(int j = 0; j < digits.size(); j++){
				num = num * 10 + digits[j];
			}
//			cout<<num<<endl;
			int a_plus = num + 1;
			int a_plus_sum = 0;
			while(a_)
			if(is_prime(__gcd(num, a_plus)))
			
		}while(next_permutation(digits.begin(), digits.end()));
		
	}
}