#include <iostream>
#include <string>
using namespace std;
int main(){
	int m;
	cin>>m;
	string id, in_time, out_time;
	int max_time = -1, min_time = 999999;
	string max_id, min_id;
	for(int i = 0; i < m; i++){
		cin>>id>>in_time>>out_time;
		string sub[3];
		sub[0] = in_time.substr(0, 2);
		sub[1] = in_time.substr(3, 2);
		sub[2] = in_time.substr(6);
//		cout<<sub[0]<<" "<<sub[1]<<" "<<sub[2]<<endl;
		int t = stoi(sub[0]) * 3600 + stoi(sub[1]) * 60 + stoi(sub[2]);
		if(t < min_time){
			min_time = t;
			min_id = id;
		}
		sub[0] = out_time.substr(0, 2);
		sub[1] = out_time.substr(3, 2);
		sub[2] = out_time.substr(6);
		t = stoi(sub[0]) * 3600 + stoi(sub[1]) * 60 + stoi(sub[2]);
		if(t > max_time){
			max_time = t;
			max_id = id;
		}
	}
	cout<<min_id<<" "<<max_id;
	return 0;
}