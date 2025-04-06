#include <iostream>

using namespace std;
int main(){
	int a,d1,b,d2;
	cin>>a>>d1>>b>>d2;
	int cnt_a=0,cnt_b=0;
	while(a!=0){
		if(a%10==d1){
			cnt_a=cnt_a*10+d1;
		}
		a/=10;
	}
	while(b!=0){
		if(b%10==d2){
			cnt_b=cnt_b*10+d2;
		}
		b/=10;
	}
	cout<<cnt_a+cnt_b;
	return 0;
}