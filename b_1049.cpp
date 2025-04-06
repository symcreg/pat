#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cin >> n;
	double t = 0;
	long long sum = 0;
	for(int i = 0; i < n; i++){
		cin >> t;
		sum += (long long)(t * 1e3) * (i + 1) * (n - i);
	}
	cout<<fixed<<setprecision(2)<<(double)sum / 1e3;
	return 0;
}