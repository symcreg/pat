#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;
struct Problem{
	int score;
	int cho_num;
	int cho_cor_num;
	map<char, int> cho;
	map<char, int> wro_cho;
	vector<char> max_wro_cho;
	int wro_cnt;
};
int main(){
	int n, m;
	cin>>n>>m;
	Problem p;
	vector<Problem> ps(m);
	for(int i = 0; i < m; i++){
		cin>>ps[i].score>>ps[i].cho_num>>ps[i].cho_cor_num;
		for(int j = 0; j < ps[i].cho_cor_num; j++){
			char tmp;
			cin>>tmp;
			ps[i].cho[tmp]++;
		}
	}
//	for(int i = 0; i < m; i++){
//		cout<<ps[i].score<<" "<<ps[i].cho_num<<" "<<ps[i].cho_cor_num<<" ";
//		for(auto m : ps[i].cho){
//			cout<<m.first<<" ";
//		}
//		cout<<endl;
//	}
	int max_wro_cnt = 0;
	for(int i = 0; i < n; i++){
		double score = 0;
		for(int j = 0; j < m; j++){
			// input
			char buf;
			int cho_num;
			vector<char> cho;
			while(cin>>buf){
				if(buf >= '0' && buf <= '9'){
					cho_num = buf - '0';
					while(cin>>buf){
						if(buf >= 'a' && buf <= 'z'){
							cho.push_back(buf);
						}
						if(buf == ')') break;
					}
				}
				if(buf == ')') break;
			}
			
			//judge
			int zero = 0;
			for(int k = 0; k < cho.size(); k++){
				if(ps[j].cho[cho[k]] == 0){
					zero = 1;
					ps[j].wro_cho[cho[k]]++;
				}
			}
			
			if(zero == 0){
				if(cho_num == ps[j].cho_cor_num){
					score += ps[j].score;
				}else if(cho_num != 0){
					score += ps[j].score / 2.0;
				}
			}
			if(zero || cho_num == 0){
				ps[j].wro_cnt++;
			}
			if(ps[j].wro_cnt > max_wro_cnt){
				max_wro_cnt = ps[j].wro_cnt;
			}
		}
		cout<<fixed<<setprecision(1)<<score<<endl;
	}
	// TODO:fix here
	int max_wro_cho_cnt = 0;
	for(int i = 0; i < m; i++){
		for(auto w_c : ps[i].wro_cho){
			if(max_wro_cho_cnt < w_c.second){
				max_wro_cho_cnt = w_c.second;
			}
		}
		for(auto w_c : ps[i].wro_cho){
			if(max_wro_cho_cnt == w_c.second){
				ps[i].max_wro_cho.push_back(w_c.first);
			}
		}
	}
	
	
	for(int i = 0; i < m; i++){
		if(ps[i].wro_cnt == max_wro_cnt){
			cout<<max_wro_cnt<<" "<<i+1<<"-";
			int max_wro_cho_cnt = 0;
			for(auto m_w_c : ps[i].max_wro_cho){
				cout<<m_w_c;
			}
			cout<<endl;
		}
	}
	return 0;
}