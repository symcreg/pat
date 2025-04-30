#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string ans;
	vector<int> res;
	for(int i = 0; i < n; i++){
		int t = 0;
		for(int j = 0; j < 4; j++){
			cin>>ans;
			if(ans.find('-') != string::npos){
				if(ans[ans.find('-')+1] == 'T'){
					t = (ans[ans.find('-')-1]) - 'A' + 1;
				}
			}
		}
		res.push_back(t);
	}
	for(int i = 0; i < res.size(); i++){
		cout<<res[i];
	}
	return 0;
}