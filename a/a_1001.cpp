#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	int c = a + b;
	int neg = 0;
	if(c < 0) neg = 1, c = -c;
	vector<int> sep;
	int flag = 0;
	while(c != 0 || flag == 0){
		int tmp = c % 1000;
		c /= 1000;
		sep.push_back(tmp);
		flag = 1;
	}
	if(neg) cout<<"-";
	if(sep.size() == 1){
		cout<<sep[0];
	}else{
		for(int i = sep.size() - 1; i >= 0; i--){
			if(i != sep.size() - 1) cout<<setw(3)<<setfill('0');
			cout<<sep[i];
			if(i != 0) cout<<",";
		}
	}
	
	return 0;
}