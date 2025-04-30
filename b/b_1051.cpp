#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	double r1, p1, r2, p2;
	double a, b, c, d;
	double re = 0, im = 0;
	cin >> r1 >> p1 >> r2 >>p2;
	a = r1 * (cos(p1));
	b = r1 * (sin(p1));
	c = r2 * (cos(p2));
	d = r2 * (sin(p2));
	re = a * c - b * d;
	im = a * d + b * c;
	if(re >= -0.005 && re < 0){
		cout << "0.00";
	}else{
		cout<<fixed<<setprecision(2)<<re;
	}
	if(im >= 0){
		cout<<"+"<<fixed<<setprecision(2)<<im<<"i";
	}else if(im >= -0.005 && im < 0){
		cout << "+0.00i";
	}else{
		cout<<fixed<<setprecision(2)<<im<<"i";
	}
	return 0;
}