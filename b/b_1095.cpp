#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
struct Stu{
	string s;
	int score;
	
	int type;
	int place;
	int date;
	int id;
};
struct Pla{
	int id;
	int num;
	int score;
};
void decode(Stu& stu){
	stu.type = stu.s[0];
	stu.place = stoi(stu.s.substr(1, 3));
	stu.date = stoi(stu.s.substr(4, 6));
	stu.id = stoi(stu.s.substr(10, 3));
}
bool cmp1(Stu s1, Stu s2){
	if(s1.score != s2.score){
		return s1.score > s2.score;
	}else{
		return s1.s < s2.s;
	}
}
bool cmp2(Pla p1, Pla p2){
	if(p1.num != p2.num){
		return p1.num > p2.num;
	}else{
		return p1.id < p2.id;
	}
}
int main(){
	int n, m;
	cin >> n >> m;
	vector<Stu> stus(n);
	map<int, Pla> place_m;
	vector<Pla> place_v;
	for(int i = 0; i < n; i++){
		cin>>stus[i].s>>stus[i].score;
		decode(stus[i]);
		place_m[stus[i].place].id = stus[i].place;
		place_m[stus[i].place].num++;
		place_m[stus[i].place].score += stus[i].score;
//		cout<<"---"<<endl;
//		cout<<stus[i].type<<" "<<stus[i].place<<" "<<stus[i].date<<" "<<stus[i].id<<endl;
	}
	for(int i = 0; i < m; i++){
		int order;
		cin>>order;
		if(order == 1){
			char sub_order;
			cin>>sub_order;
			cout<<"Case "<<i+1<<": "<<order<<" "<<sub_order<<endl;
			sort(stus.begin(), stus.end(), cmp1);
			int cnt = 0;
			for(int j = 0; j < stus.size(); j++){
				if(stus[j].type == sub_order){
					cout<<stus[j].s<<" "<<stus[j].score<<endl;
					cnt++;
				}
			}
			if(cnt == 0) cout<<"NA"<<endl;
		}else if(order == 2){
			int sub_order;
			cin>>sub_order;
			cout<<"Case "<<i+1<<": "<<order<<" "<<sub_order<<endl;
			if(place_m[sub_order].num == 0){
				cout<<"NA"<<endl;
				continue;
			}
			cout<<place_m[sub_order].num<<" "<<place_m[sub_order].score<<endl;
		}else if(order == 3){
			int sub_order;
			cin>>sub_order;
			cout<<"Case "<<i+1<<": "<<order<<" "<<sub_order<<endl;
			map<int, int> tmp;
			for(int j = 0; j < stus.size(); j++){
				if(stus[j].date == sub_order){
					tmp[stus[j].place]++;
				}
			}
			vector<Pla> pla_v;
			for(auto ttt : tmp){
				pla_v.push_back(Pla{ttt.first, ttt.second, 0});
			}
			sort(pla_v.begin(), pla_v.end(), cmp2);
			for(int j = 0; j < pla_v.size(); j++){
				cout<<pla_v[j].id<<" "<<pla_v[j].num<<endl;
			}
			if(pla_v.size() == 0) cout<<"NA"<<endl;
		}
	}
	return 0;
}