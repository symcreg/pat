#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n;
	long long int p;
	cin>>n>>p;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin>>v[i];
	}
	sort(v.begin(), v.end()); //up
	int num = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + num; j < n; j++){
			if(v[j] <= v[i] * p){
				if(j - i + 1 > num){
					num = j - i + 1;
				}
			}else{
				break;
			}
		}
	}
	cout<<num;
	return 0;
}