#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int k;
	cin>>k;
	vector<int> seq(k);
	int l_idx = 0, r_idx = k - 1, sum = -1, temp = 0, temp_idx = 0;
	for(int i = 0; i < k; i++){
		cin>>seq[i];
		temp = temp + seq[i];
		if(temp < 0){
			temp = 0;
			temp_idx = i + 1;
		}else if(temp > sum){
			sum = temp;
			l_idx = temp_idx;
			r_idx = i;
		}
	}
	if(sum < 0) sum = 0;
	cout<<sum<<" "<<seq[l_idx]<<" "<<seq[r_idx];
	return 0;
}