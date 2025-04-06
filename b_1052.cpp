#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	vector<vector<string>> emo(3);
	string e;
	for(int i = 0; i < 3; i++){
		getline(cin, e);
		for(int j = 0; j < e.size() - 1; j++){
			if(e[j] == '['){
				int k = j + 1;
				while(k < e.size() && e[k] != ']') k++;
				if(k < e.size()){
					emo[i].push_back(e.substr(j+1, k-j-1));
					j = k;
				}
			}
		}
	}
//	cout<<emo[0][0];
	int k;
	cin>>k;
	for(int i = 0; i < k; i++){
		int a, b, c, d, e;
		cin>>a>>b>>c>>d>>e;
		if(a < 1 || b < 1 || c < 1 || d < 1 || e < 1|| a > emo[0].size() || b > emo[1].size() || c > emo[2].size() || d > emo[1].size() || e > emo[0].size()){
			cout<<"Are you kidding me? @\\/@"<<endl;
			continue;
		}
		cout<<emo[0][a-1]<<"("<<emo[1][b-1]<<emo[2][c-1]<<emo[1][d-1]<<")"<<emo[0][e-1]<<endl;
	}
	return 0;
}