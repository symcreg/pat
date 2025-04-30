#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct Complex{
	int re;
	int im;
	double norm;
};
int main(){
	int n;
	cin>>n;
	Complex c;
	double max = -1;
	for(int i = 0; i < n; i++){
		cin>>c.re>>c.im;
		c.norm = sqrt((c.re * c.re + c.im * c.im));
//		cout<<"n:"<<c.norm<<endl;
		if(c.norm > max){
			max = c.norm;
		}
	}
	cout<<fixed<<setprecision(2)<<max;
	return 0;
}