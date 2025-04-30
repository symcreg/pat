#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<double> ropes(n);
	for(int i = 0; i < n; i++){
		cin>>ropes[i];
	}
	sort(ropes.begin(), ropes.end());
	double ret = ropes[0];
	for(int i = 1; i < n; i++){
//		cout<<ropes[i]<<endl;
		ret = (ret + ropes[i]) / 2;
	}
	cout<<(int)ret;
	return 0;
}