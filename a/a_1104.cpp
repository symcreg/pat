#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	double sum = 0, num = 0;
	for(int i = 0; i < n; i++){
		cin>>num;
		sum += num * 1000 * (i + 1) * (n - i);
	}
	cout<<fixed<<setprecision(2)<<sum * 0.001;
	return 0;
}