#include <iostream>
#include <vector>
using namespace std;
struct Problem{
	int score;
	int answer;
};
int main(){
	int n, m;
	cin>>n>>m;
	vector<Problem> v(m);
	for(int i = 0; i < m; i++){
		cin>>v[i].score;
	}
	for(int i = 0; i < m; i++){
		cin>>v[i].answer;
	}
	for(int i = 0; i < n; i++){
		int sum = 0;
		int ans = 0;
		for(int j = 0; j < m; j++){
			cin>>ans;
			if(ans == v[j].answer){
				sum += v[j].score;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}