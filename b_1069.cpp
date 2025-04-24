#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	int m, n, s;
	cin>>m>>n>>s;
	vector<string> names(m);
	vector<string> ret;
	map<string, int> awards;
	int iter = 0;
	for(int i = 0; i < m; i++){
		cin>>names[i];
	}
	for(int i = s-1; i < m; i += n){
		for(int j = 0; i + j < m; j++){
			if(awards[names[i+j]] == 0){
				awards[names[i+j]]++;
				ret.push_back(names[i+j]);
				i = i + j; // update iter and n
				break;
			}
		}
	}
	if(awards.size() == 0){
		cout<<"Keep going...";
	}else{
		for(int i = 0; i < ret.size(); i++){
			cout<<ret[i]<<endl;
		}
	}
	return 0;
}