#include <iostream>
#include <set>
#include <vector>
using namespace std;
struct Edge{
	int v1;
	int v2;
};
int ver[10005];
int main(){
	int n, m, k;
	cin>>n>>m;
	vector<Edge> e(m);
	for(int i = 0; i < m; i++){
		cin>>e[i].v1>>e[i].v2;
	}
	cin>>k;
	for(int i = 0; i < k; i++){
		set<int> colors;
		for(int j = 0; j < n; j++){
			cin>>ver[j];
			colors.insert(ver[j]);
		}
		int flag = 1;
		for(int j = 0; j < m; j++){
			if(ver[e[j].v1] == ver[e[j].v2]){
				flag = 0;
				break;
			}
		}
		if(flag){
			cout<<colors.size()<<"-coloring"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}