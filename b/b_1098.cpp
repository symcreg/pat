#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> up(n);
	vector<int> down(n);
	int max = -1;
	int min = 1e5;
	for(int i = 0; i < n; i++){
		cin>>up[i];
		if(up[i] < min){
			min = up[i];
		}
	}
	for(int i = 0; i < n; i++){
		cin>>down[i];
		if(down[i] > max){
			max = down[i];
		}
	}
	if(max >= min){
		cout<<"No "<<max - min + 1;
	}else{
		cout<<"Yes "<<min - max;
	}
	return 0;
}