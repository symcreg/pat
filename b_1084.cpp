#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	int d, n;
	cin>>d>>n;
	vector<int> seq;
	vector<int> out;
	map<int, int> cnt;
	out.push_back(d);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < out.size(); j++){
			if(cnt[out[j]] == 0) seq.push_back(out[j]);
			cnt[out[j]]++;
		}
		out.clear();
		cout<<"|"<<out.size()<<endl;
		for(int j = 0; j < seq.size(); j++){
			out.push_back(seq[j]);
			out.push_back(cnt[seq[j]]);
		}
		for(int j = 0; j < out.size(); j++){
			cout<<out[j];
		}
		cout<<endl;
	}
	return 0;
}