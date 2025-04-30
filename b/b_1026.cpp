#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int c1, c2, h, m, s;
	cin>>c1>>c2;
	int t = (c2 - c1 + 50) / 100;
	h = t / 3600;
	t = t % 3600;
	m = t / 60;
	s = t % 60;
	cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s;
	return 0;
}