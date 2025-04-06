#include <iostream>

using namespace std;

int main(){
	
	int n = 0;
	int step = 0;
	cin>>n;
	for(;n!=1;){
		if(n%2==0){
			n/=2;
		}else{
			n=(3*n+1)/2;
		}
		step++;
	}
	std::cout<<step<<endl;	
	return 0;
	
}