#include <iostream>

using namespace std;
int main(){
	int t, k;
	cin>>t>>k;
	for(int i = 0; i < k; i++){
		int n1, b, t0, n2;
		cin>>n1>>b>>t0>>n2;
		if(t0 > t){
			cout<<"Not enough tokens.  Total = "<<t<<"."<<endl;
			continue;
		}
		int win = 0;
		if(b == 0){
			if(n2 < n1){
				win = 1;
			}
		}else if(b == 1){
			if(n2 > n1){
				win = 1;
			}
		}
		if(win){
			t += t0;
			cout<<"Win "<<t0<<"!  Total = "<<t<<"."<<endl;
		}else{
			t -= t0;
			cout<<"Lose "<<t0<<".  Total = "<<t<<"."<<endl;
		}
		if(t <= 0){
			cout<<"Game Over.";
			break;
		}
	}
	return 0;
}