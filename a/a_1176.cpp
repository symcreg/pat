#include <iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	int f1 = 0;
	int f2 = 1;
	int min = abs(n - f1);
	int ret = f1;
	while(1){
		int temp = f1 + f2;
		f1 = f2;
		f2 = temp;
		if(abs(n - f2) < min){
			min = abs(n - f2);
			ret = f2;
		}else{
			break;
		}
	}
	cout<<ret;
	return 0;
}