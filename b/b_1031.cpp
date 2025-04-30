#include <iostream>
#include <string>
using namespace std;
int main(){
	int n, sum = 0, z = 0, m, q[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	int check[] = {1, 0, 'X', 9, 8, 7, 6, 5, 4, 3, 2};
	string s;
	cin>>n;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cin>>s;
		if(s[17] != 'X'){
			m = s[17] - '0';
		}else{
			m = s[17];
		}
		for(int j = 0; j < 17; j++){
			sum += (s[j] - '0') * q[j];
//			cout<<j<<":"<<s[j]-'0'<<" * "<<q[j]<<endl;
		}
//		cout<<sum<<endl;
		z = sum % 11;
//		cout<<"m:"<<m<<" [z]:"<<check[z]<<endl;
//		printf(" %c \n", m);
		if(check[z] != m){
			cout<<s<<endl;
			cnt++;
		}
		sum = 0;
	}
	if(!cnt){
		cout<<"All passed";
	}
	return 0;
}