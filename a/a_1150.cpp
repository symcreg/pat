#include <iostream>
#include <set>
#include <vector>
using namespace std;
int e[205][205], ans = 99999999, ans_id = 0, n, m;
const int inf = 999999;
void check(int idx){
	int cnt, flag = 1, sum = 0;
	cin>>cnt;
	set<int> s;
	vector<int> path(cnt);
	for(int i = 0; i < cnt; i++){
		cin>>path[i];
		s.insert(path[i]);
	}
	for(int i = 0; i < cnt - 1; i++){
		if(e[path[i]][path[i+1]] == inf){
			flag = 0;
		}else{
			sum += e[path[i]][path[i+1]];
		}
	}
	if(flag == 0){ // not reachable
		cout<<"Path "<<idx<<": NA (Not a TS cycle)"<<endl;
	}else if(path[0] != path[cnt - 1] || s.size() != n){ // not a cycle or not all city visited
//		cout<<s.size()<<" "<<cnt<<endl;
		cout<<"Path "<<idx<<": "<<sum<<" (Not a TS cycle)"<<endl;
	}else if(cnt != n + 1){ // not simple
		cout<<"Path "<<idx<<": "<<sum<<" (TS cycle)"<<endl;
		if(sum < ans){
			ans = sum;
			ans_id = idx;
		}
	}else{
		cout<<"Path "<<idx<<": "<<sum<<" (TS simple cycle)"<<endl;
		if(sum < ans){
			ans = sum;
			ans_id = idx;
		}
	}
	
}
int main(){
	cin>>n>>m;
	int a, b, c;
	fill(e[0], e[0] + 205 * 205, inf);
	for(int i = 0; i < m; i++){
		cin>>a>>b>>c;
		e[a][b] = e[b][a] = c;
	}
	int k;
	cin>>k;
	for(int i = 0; i < k; i++) check(i+1);
	cout<<"Shortest Dist("<<ans_id<<") = "<<ans<<endl;
	return 0;
}