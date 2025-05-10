#include <iostream>
#include <vector>
using namespace std;
int main(){
	int k, n;
	cin>>k;
	for(int i = 0; i < k; i++){
		cin>>n;
		vector<int> v(n);
		int flag = 1;
		for(int j = 0; j < n; j++){
			cin>>v[j];
			for(int t = 0; t < j; t++){
				if(v[j] == v[t] || abs(v[j] - v[t]) == abs(j - t)){
					flag = 0;
					break;
				}
			}
//			if(flag == 0) break;
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}