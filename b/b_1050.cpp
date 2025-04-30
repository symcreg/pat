#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
bool cmp(int a, int b){
	return a > b;
}
int main(){
	int n, h = 0, w = 0;
	cin >> n;
	h = sqrt(n);
	w = h;
	while(h * w != n){
		h++;
		w = n / h;
	}
//	cout<<h<<" "<<w<<endl;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end(), cmp);
	
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			cout << v[i * w + j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}