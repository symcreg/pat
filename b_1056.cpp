#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, sum = 0;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin>>v[i];
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			sum += v[i] * 10 + v[j];
			if(v[i] != v[j]) sum += v[j] * 10 + v[i];
		}
	}
	cout<<sum;
	return 0;
}