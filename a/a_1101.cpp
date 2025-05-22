#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> seq(n);
	vector<int> seq_cp(n);
	for(int i = 0; i < n; i++){
		cin>>seq[i];
		seq_cp[i] = seq[i];
	}
	sort(seq_cp.begin(), seq_cp.end());
	int cnt = 0;
	vector<int> pivot;
	int max = 0;
	for(int i = 0; i < n; i++){
		if(seq_cp[i] == seq[i] && seq_cp[i] > max){
			cnt++;
			pivot.push_back(seq_cp[i]);
		}
		if(seq_cp[i] > max){
			max = seq_cp[i];
		}
	}
	cout<<cnt<<endl;
	sort(pivot.begin(), pivot.end());
	int flag = 0;
	for(int i = 0; i < pivot.size(); i++){
		if(flag) cout<<" ";
		cout<<pivot[i];
		flag = 1;
	}
	cout<<endl;
	return 0;
}