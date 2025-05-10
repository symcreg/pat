#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> ropes(n);
	for(int i = 0; i < n; i++){
		cin>>ropes[i];
	}
	sort(ropes.begin(), ropes.end());
	int sum = ropes[0];
	for(int i = 1; i < n; i++){
		sum =  (sum + ropes[i]) / 2;
	}
	cout<<sum;
	return 0;
}