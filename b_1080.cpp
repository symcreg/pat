#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct Score{
	int gp = -1;
	int gm = -1;
	int gf = -1;
	int is_g[3] = {0};
	int g = 0;
	bool pass = 0;
};
bool cmp(pair<string, Score> p1, pair<string, Score> p2){
	if(p1.second.g == p2.second.g){
		return p1.first < p2.first;
	}else{
		return p1.second.g > p2.second.g;
	}
}
void pass(Score& s){
	if(s.gm > s.gf){
		s.g = int(0.4 * s.gm + 0.6 * s.gf + 0.5);
	}else{
		s.g = s.gf;
	}
	if(s.g >= 60 && s.gp >= 200){
		s.pass = 1;
	}
}
int main(){
	int p, m, n;
	cin>>p>>m>>n;
	map<string, Score> stu;
	string name;
	Score sco;
	for(int i = 0; i < p; i++){
		cin>>name;
		cin>>sco.gp;
		stu[name].gp = sco.gp;
		stu[name].is_g[0] = 1;
	}
	for(int i = 0; i < m; i++){
		cin>>name;
		cin>>sco.gm;
		stu[name].gm = sco.gm;
		stu[name].is_g[1] = 1;
	}
	for(int i = 0; i < n; i++){
		cin>>name;
		cin>>sco.gf;
		stu[name].gf = sco.gf;
		stu[name].is_g[2] = 1;
	}
	for(auto& st : stu){
		pass(st.second);
//		cout<<st.second.pass<<endl;
	}
	vector<pair<string, Score>> stu_v(stu.begin(), stu.end());
	sort(stu_v.begin(), stu_v.end(), cmp);
//	cout<<endl;
	for(int i = 0; i < stu_v.size(); i++){
//		cout<<stu_v[i].second.pass<<endl;
		if(stu_v[i].second.pass == 0) continue;
		if(stu_v[i].second.is_g[0] + stu_v[i].second.is_g[1] + stu_v[i].second.is_g[2] < 3){
			stu_v[i].first = "missing";
		}
		cout<<stu_v[i].first<<" ";
		if(stu_v[i].second.is_g[0] == 0){
			cout<<"-1 ";
		}else{
			cout<<stu_v[i].second.gp<<" ";
		}
		if(stu_v[i].second.is_g[1] == 0){
			cout<<"-1 ";
		}else{
			cout<<stu_v[i].second.gm<<" ";
		}
		if(stu_v[i].second.is_g[2] == 0){
			cout<<"-1 ";
		}else{
			cout<<stu_v[i].second.gf<<" ";
		}
		cout<<stu_v[i].second.g<<endl;
	}
	
	return 0;
}
