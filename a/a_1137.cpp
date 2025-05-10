#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct Node{
	string id = "missing";
	int gp = -1;
	int gm = -1;
	int gf = -1;
	int g = -1;
};
bool cmp(Node n1, Node n2){
	if(n1.g != n2.g){
		return n1.g > n2.g;
	}else{
		return n1.id < n2.id;
	}
}
int main(){
	int p, m, n;
	cin>>p>>m>>n;
	string id;
	int sco;
	map<string, Node> stus;
	for(int i = 0; i < p; i++){
		cin>>id>>sco;
		if(sco < 200) continue;
		stus[id].id = id;
		stus[id].gp = sco;
	}
	for(int i = 0; i < m; i++){
		cin>>id>>sco;
		stus[id].id = id;
		stus[id].gm = sco;
	}
	for(int i = 0; i < n; i++){
		cin>>id>>sco;
		stus[id].id = id;
		stus[id].gf = sco;
		stus[id].g = sco;
		if(stus[id].gm > stus[id].gf){
			stus[id].g = (0.4 * stus[id].gm + 0.6 * stus[id].gf + 0.5);
		}
	}
	vector<Node> list;
	for(auto t : stus){
		if(t.second.gp < 200) continue;
		if(t.second.g < 60) continue;
		list.push_back(t.second);
	}
	sort(list.begin(), list.end(), cmp);
	for(int i = 0; i < list.size(); i++){
		cout<<list[i].id<<" "<<list[i].gp<<" "<<list[i].gm<<" "<<list[i].gf<<" "<<list[i].g<<endl;
	}
	return 0;
}