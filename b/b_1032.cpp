#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, id, score;
	int max_id, max_score = -1;
	cin>>n;
	vector<int> v(n + 1);
	for(int i = 0; i < n; i++){
		cin>>id>>score;
		v[id] += score;
	}
	for(int i = 1; i < v.size(); i++){
		if(v[i] > max_score){
			max_score = v[i];
			max_id = i;
		}
	}
	cout<<max_id<<" "<<max_score;
	return 0;
}