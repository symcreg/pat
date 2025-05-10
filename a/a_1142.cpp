#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int e[205][205];
const int inf = 99999999;
set<int> ver;
void check(vector<int>& seq){
	int flag = 1;
	for(int i = 0; i < seq.size(); i++){
		for(int j = i + 1; j < seq.size(); j++){
			if(e[seq[i]][seq[j]] != 0){ // not adjacent
				flag = -1;
				break;
			}
		}
		if(flag == -1) break;
	}
	if(flag == -1){
		cout<<"Not a Clique"<<endl;
	}else{
		for(auto t : ver){
			if(find(seq.begin(), seq.end(), t) != seq.end()) continue;
			int con = 1;
			for(int i = 0; i < seq.size(); i++){
				if(e[t][seq[i]] != 0){
					con = 0;
					break;
				}
			}
			if(con == 1){
				flag = 0;
				break;
			}
		}
		if(flag == 0){
			cout<<"Not Maximal"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
	}
}
int main(){
	int nv, ne;
	cin>>nv>>ne;
	int a, b;
	fill(e[0], e[0] + 205 * 205, inf);
	for(int i = 0; i < ne; i++){
		cin>>a>>b;
		e[a][b] = e[b][a] = 0;
		e[a][a] = 0;
		e[b][b] = 0;
		ver.insert(a);
		ver.insert(b);
	}
	int m;
	cin>>m;
	for(int i = 0; i < m; i++){
		int k;
		cin>>k;
		vector<int> seq(k);
		for(int j = 0; j < k; j++){
			cin>>seq[j];
		}
		check(seq);
	}
	return 0;
}