#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int n1, n2;
	cin>>n1>>n2;
	int flag = 0;
	vector<int> seq(n2-n1+1);
	int idx = 0;
	for(int i = n1; i <= n2; i++){
		int num = i;
		int ans = 1;
		while(num != 0){
			ans *= pow((num % 10), 3);
			num /= 10;
		}
		int sum = 0;
		while(ans != 0){
			sum += (ans % 10);
			ans /= 10;
		}
		seq[idx] = sum;
		idx++;
	}
	for(int i = 0; i < seq.size(); i++){
		cout<<seq[i]<<" ";
	}
//	while(flag == 0){
//		
//	}
	return 0;
}