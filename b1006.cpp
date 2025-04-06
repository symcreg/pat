#include <iostream>
#include <string>

using namespace std;

int main(){
	int n, i=0;
	cin >> n;
	int h[3] = {0};
	while(n!=0){
		h[i++]=n%10;
		n/=10;
	}
	
	for(i = 0; i < h[2]; i++){
		cout<<"B";
	}
	for(i = 0; i < h[1]; i++){
		cout<<"S";
	}
	for(i = 0; i < h[0]; i++){
		cout<<i+1;
	}
	return 0;
}