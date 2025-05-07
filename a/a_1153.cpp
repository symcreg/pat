#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

struct Stu{
	string id;
	int score;
};
struct Site{
	int id;
	int num;
};
bool cmp(Stu s1, Stu s2){
	if(s1.score != s2.score){
		return s1.score > s2.score;
	}else{
		return s1.id < s2.id;
	}
}
bool cmp1(Site s1, Site s2){
	if(s1.num != s2.num){
		return s1.num > s2.num;
	}else{
		return s1.id > s2.id;
	}
}
int main(){
	int n, m;
	cin>>n>>m;
	vector<Stu> v(n);
	map<int, int> m_num;
	map<int, int> m_score;
	map<int, int> m_date;
	for(int i = 0; i < n; i++){
		cin>>v[i].id>>v[i].score;
		int site = stoi(v[i].id.substr(1, 3));
		m_num[site]++;
		m_score[site] += v[i].score;
		int date = stoi(v[i].id.substr(4, 6));
		m_date[site] = date;
	}
	sort(v.begin(), v.end(), cmp);
	for(int i = 0; i < m; i++){
		int type = 0;
		cin>>type;
		if(type == 1){
			char term;
			cin>>term;
			cout<<"Case "<<i+1<<": "<<type<<" "<<term<<endl;
			int cnt = 0;
			for(int i = 0; i < v.size(); i++){
				if(v[i].id[0] == term){
					cnt++;
					cout<<v[i].id<<" "<<v[i].score<<endl;
				}
			}
			if(cnt == 0) cout<<"NA"<<endl;
		}else if(type == 2){
			int term;
			cin>>term;
			cout<<"Case "<<i+1<<": "<<type<<" "<<term<<endl;
			if(m_num.find(term) != m_num.end()){
				cout<<m_num[term]<<" "<<m_score[term]<<endl;
			}else{
				cout<<"NA"<<endl;
			}
		}else{
			int term;
			cin>>term;
			cout<<"Case "<<i+1<<": "<<type<<" "<<term<<endl;
			vector<Site> v_site;
			for(auto t : m_date){
				if(t.second == term){
					v_site.push_back({t.first, m_num[t.first]});
				}
			}
			sort(v_site.begin(), v_site.end(), cmp1);
			int cnt = 0;
			for(int j = 0; j < v_site.size(); j++){
				cnt++;
				cout<<v_site[j].id<<" "<<v_site[j].num<<endl;
			}
			if(cnt == 0) cout<<"NA";
		}
	}
	
	return 0;
}