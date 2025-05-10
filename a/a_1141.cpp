#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
struct School{
	string name;
	int tws;
	int b, a, t;
	int ns;
};
bool cmp(School s1, School s2){
	if(s1.tws != s2.tws){
		return s1.tws > s2.tws;
	}else{
		if(s1.ns != s2.ns){
			return s1.ns < s2.ns;
		}else{
			return s1.name < s2.name;
		}
	}
}
int main(){
	int n;
	cin>>n;
	string id, sch;
	int sco;
	map<string, School> m;
	for(int i = 0; i < n; i++){
		cin>>id>>sco>>sch;
		for(int j = 0; j < sch.size(); j++){
			sch[j] = tolower(sch[j]);
		}
		m[sch].name = sch;
		m[sch].ns++;
		if(id[0] == 'B'){
			m[sch].b += sco;
		}else if(id[0] == 'A'){
			m[sch].a += sco;
		}else if(id[0] == 'T'){
			m[sch].t += sco;
		}
	}
	vector<School> schools;
	for(auto t : m){
		t.second.tws = t.second.b / 1.5 + t.second.a + t.second.t * 1.5;
		schools.push_back(t.second);
//		cout<<t.second.name<<endl;
	}
	sort(schools.begin(), schools.end(), cmp);
	cout<<schools.size()<<endl;
	int pre = -1;
	int rank = 0;
	for(int i = 0; i < schools.size(); i++){
		if(schools[i].tws != pre) rank = i + 1;
		cout<<rank;
		cout<<" "<<schools[i].name<<" "<<schools[i].tws<<" "<<schools[i].ns<<endl;
		pre = schools[i].tws;
	}
	return 0;
}