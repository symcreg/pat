#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int state(char p1, char p2){
	if(p1 == 'C'){
		if(p2 == 'C'){
			return 0;
		}else if(p2 == 'J'){
			return 1;
		}else{
			return -1;
		}
	}else if(p1 == 'J'){
		if(p2 == 'C'){
			return -1;
		}else if(p2 == 'J'){
			return 0;
		}else{
			return 1;
		}
	}else{
		if(p2 == 'C'){
			return 1;
		}else if(p2 == 'J'){
			return -1;
		}else{
			return 0;
		}
	}
}
int main(){
	int n, cnt_win = 0, cnt_loss = 0, cnt_p = 0;
	char p[2];
	map<char, int> m[2];
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>p[0]>>p[1];
		int s = state(p[0], p[1]);
		if(s == 0){
			cnt_p++;
		}else if(s == 1){
			m[0][p[0]]++;
			cnt_win++;
		}else if(s == -1){
			m[1][p[0]]++;
			cnt_loss++;
		}
	}
	int max_win = m[0]['B'];
	p[0] = 'B';
	if(m[0]['C'] > max_win) {
		max_win = m[0]['C']; p[0] = 'C';
	}
	if(m[0]['J'] > max_win) {
		max_win = m[0]['J']; p[0] = 'J';
	}
	max_win = m[1]['C'];
	p[1] = 'C';
	if(m[1]['J'] > max_win) {
		max_win = m[1]['J']; p[1] = 'J';
	}
	if(m[1]['B'] > max_win) {
		max_win = m[1]['B']; p[1] = 'B';
	}
	cout<<cnt_win<<" "<<cnt_p<<" "<<cnt_loss<<endl;
	cout<<cnt_loss<<" "<<cnt_p<<" "<<cnt_win<<endl;
	cout<<p[0]<<" ";
	if(p[1] == 'C'){
		cout<<"B";
	}else if(p[1] == 'J'){
		cout<<"C";
	}else{
		cout<<"J";
	}
	return 0;
}