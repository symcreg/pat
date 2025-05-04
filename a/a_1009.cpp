#include <iostream>
#include <iomanip>
using namespace std;
double a[1005] = {0}, b[1005] = {0}, c[2005] = {0};
int main(){
	int k;
	cin>>k;
	int exp;
	double coe;
	for(int i = 0; i < k; i++){
		cin>>exp>>coe;
		a[exp] = coe;
	}
	cin>>k;
	for(int i = 0; i < k; i++){
		cin>>exp>>coe;
		b[exp] = coe;
	}
	int cnt = 0;
	for(int i = 0; i < 1005; i++){
//		if(a[i] == 0) continue;
		for(int j = 0; j < 1005; j++){
//			if(b[j] == 0) continue;
			int exp_c = i + j;
			double coe_c = a[i] * b[j];
			c[exp_c] += coe_c;
			
		}
	}
	for(int i = 0; i < 2005; i++){
		if(c[i] != 0) cnt++;
	}
	cout<<cnt;
	for(int i = 2004; i >= 0; i--){
		if(c[i] != 0){
			cout<<" "<<i<<" "<<fixed<<setprecision(1)<<c[i];
		}
	}
	
	return 0;
}