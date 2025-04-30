#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Problem{
	int score;
	int total;
	int num;
	vector<char> correct;
	int cnt;
};
int main(){
	int n, m;
	cin>>n>>m;
	int score = 0, t = 0, correctn = 0;
	vector<Problem> v;
	int cnt_total = 0;
	for(int i = 0; i < m; i++){
		Problem p;
		char s;
		cin>>score>>t>>correctn;
		p.score = score;
		p.total = t;
		p.num = correctn;
		p.cnt = 0;
		for(int j = 0; j < correctn; j++){
			cin>>s;
			p.correct.push_back(s);
		}
		v.push_back(p);
	}
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < m; j++){
			int num = 0;
			int flag = 0;
			char ch;
			vector<char> correct;
			while(true){
				cin>>ch;
				if(ch == '('){
					cin>>num;
				}
				if(islower(ch)){
					correct.push_back(ch);
				}
				if(ch == ')'){
					break;
				}
			}
//			cout<<"|"<<num<<"|"<<v[j].num<<endl;
			if(num != v[j].num){
				flag = 1;
			}else{
				for(int k = 0; k < num; k++){
					if(correct[k] != v[j].correct[k]){
						flag = 1;
						break;
					}
				}
			}
			
			if(flag != 1){
				sum += v[j].score;
			}else{
				v[j].cnt++;
				cnt_total++;
			}
		}
		cout<<sum<<endl;
	}
	if(cnt_total == 0){
		cout<<"Too simple";
	}else{
		int max = -1;
		for(int i = 0; i < v.size(); i++){
//			cout<<"|"<<v[i].cnt<<endl;
			if(v[i].cnt > max){
				max = v[i].cnt;
			}
		}
		cout<<max;
		for(int i = 0; i < v.size(); i++){
			if(v[i].cnt >= max){
				cout<<" ";
				cout<<i+1;
			}
		}
	}
	return 0;
}