#include <iostream>

using namespace std;
int main(){
	int k, n;
	int flag = 0;
	while(cin>>k>>n){
		if(n==0){
			break;
		}
		if(flag) cout<<" ";
		cout<<k*n<<" "<<n - 1;
		flag = 1;
	}
	if(flag==0) cout<<"0 0";
	return 0;
}