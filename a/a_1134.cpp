#include <iostream>
#include <vector>
#include <set>
using namespace std;
bool e[10005][10005];
struct Line{
	int a, b;
};
int main(){
	int n, m;
	cin>>n>>m;
	int a, b;
	vector<Line> lines(m);
	for(int i = 0; i < m; i++){
		cin>>a>>b;
		e[a][b] = e[b][a] = true;
		lines[i].a = a;
		lines[i].b = b;
	}
	int k;
	cin>>k;
	for(int i = 0; i < k; i++){
		int nv;
		cin>>nv;
		set<int> cover;
		int ver;
		for(int j = 0; j < nv; j++){
			cin>>ver;
			cover.insert(ver);
		}
		int flag = 1;
		for(int j = 0; j < m; j++){
			if(cover.find(lines[j].a) == cover.end() && cover.find(lines[j].b) == cover.end()){
				flag = 0;
				break;
			}
		}
		if(flag) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}