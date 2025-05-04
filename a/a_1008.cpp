#include <iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	int now = 0, d = 0, time = 0;
	for(int i = 0; i < n; i++){
		cin>>d;
		if(d > now){
			time += 6 * (d - now);
		}else if(d < now){
			time += 4 * (now - d);
		}
		now = d;
		time += 5;
	}
	cout<<time;
	return 0;
}