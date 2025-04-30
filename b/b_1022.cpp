#include <iostream>

using namespace std;
int main(){
	int a, b, d, sum;
	int s[100] = {0};
	cin>>a>>b>>d;
	sum = a + b;
	int i = 0;
	if(sum == 0){
		cout<<0;
		return 0;
	}
	while(sum!=0){
		s[i] = sum % d;
		sum /= d;
		i++;
	}
	for(i--;i>=0;i--){
		cout<<s[i];
	}
	return 0;
}