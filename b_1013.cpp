#include <iostream>
#include <vector>
using namespace std;
bool is_prime(int n){
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int m, n, cnt=0;
	cin>>m>>n;
	vector<int> p;
	for(int i = 2; cnt <= n; i++){
		if(is_prime(i)){
			cnt++;
			if(cnt >= m && cnt <= n){
				p.push_back(i);
			}
		}
	}
	cnt = 0;
	for(int i = 0; i < p.size(); i++){
		cnt++;
		if(cnt%10!=1){
			cout<<" ";
		}
		cout<<p[i];
		if(cnt%10==0){
			cout<<endl;
		}
	}
	return 0;
}