#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
	int n, m;
	cin>>n>>m;
	int a, b;
	map<int, set<int>> good_in;
	for(int i = 0; i < n; i++){
		cin>>a>>b;
		good_in[a].insert(b);
		good_in[b].insert(a);
	}
	for(int i = 0; i < m; i++){
		int k;
		cin>>k;
		map<int, int> goods;
		int g, flag = 1;
		for(int j = 0; j < k; j++){
			cin>>g;
			goods[g]++;
			if(good_in.find(g) != good_in.end()){
				for(auto k : good_in[g]){
					if(goods.find(k) != goods.end()){
						flag = 0;
						break;
					}
				}
			}
		}
		if(flag) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}