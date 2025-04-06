#include <iostream>

using namespace std;
int main(){
	int n, s[105] = {0}, k, index;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin>>index;
		s[index]++;
	}
	cin>>k;
	for(int i = 0; i < k; i++){
		cin>>index;
		if(i != 0){
			cout<<" ";
		}
		cout<<s[index];
	}
	return 0;
}