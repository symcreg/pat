#include <iostream>

using namespace std;
int main(){
	int n, sum = 1, l = 1, w = 0, q = 0;
	char c;
	cin>>n>>c;
	int i;
	for(i = 2; sum <= n; i++){
		sum += (2 * i - 1) * 2;
		l += 1;
	}
	sum -= (2 * (i-1) - 1) * 2;
	l--;	
	q = n - sum;
	w = 2 * l - 1;
//	cout<<sum<<endl;
//	cout<<l<<endl;
	for(int i = 0; i < l; i++){
		int t = (2 * (l - i) - 1);
		for (int j = 0; j < w - t; j+=2){
			cout<<" ";
		}
		for(int j = 0; j < t; j++){
			cout<<c;
		}
		cout<<endl;
	}
	for(int i = 0; i < l - 1; i++){
		int t = (2 * (i + 2) - 1);
		for (int j = 0; j < w - t; j+=2){
			cout<<" ";
		}
		for(int j = 0; j < t; j++){
			cout<<c;
		}
		cout<<endl;
	}
	cout<<q;
	return 0;
}