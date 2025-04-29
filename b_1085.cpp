#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
struct Stu{
	string id;
	int score = 0;
	string sch;
};
struct Scho{
	string name;
	int num = 0;
	int b = 0;
	int a = 0;
	int t = 0;
	int total = 0;
};
bool cmp(Scho s1, Scho s2){
	if(s1.total != s2.total){
		return s1.total > s2.total;
	}else{
		if(s1.num != s2.num){
			return s1.num < s2.num;
		}else{
			return s1.name < s2.name;
		}
	}
}
int main(){
	int n;
	cin>>n;
	map<string, Scho> m;
	Stu student;
	for(int i = 0; i < n; i++){
		cin>>student.id>>student.score>>student.sch;
		for(int j = 0; j < student.sch.size(); j++){
			student.sch[j] = tolower(student.sch[j]);
		}
//		if(m.find(student.sch) == m.end()){
			m[student.sch].name = student.sch;
			m[student.sch].num++;
			if(student.id[0] == 'B'){
				m[student.sch].b+=student.score;
			}else if(student.id[0] == 'A'){
				m[student.sch].a+=student.score;
			}else if(student.id[0] == 'T'){
				m[student.sch].t+=student.score;
			}
//		}
	}
//	cout<<m.size()<<endl;
	vector<Scho> v;
	for(auto tmp : m){
		tmp.second.total = int(tmp.second.b / 1.5 + tmp.second.a + tmp.second.t * 1.5);
		v.push_back(tmp.second);
	}
	cout<<v.size()<<endl;
	sort(v.begin(), v.end(), cmp);
	int rank = 0;
	int pre_s = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i].total != pre_s){
			rank = i + 1;
		}
		cout<<rank<<" "<<v[i].name<<" "<<v[i].total<<" "<<v[i].num<<endl;
		pre_s = v[i].total;
	}
	
	return 0;
}