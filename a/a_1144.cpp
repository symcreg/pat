#include <iostream>
#include <map>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int, int> m;
	int num;
	for(int i = 0; i < n; i++){
		cin>>num;
		m[num]++;
	}
	for(int i = 1;; i++){
		if(m.find(i) == m.end()){
			cout<<i;
			break;
		}
	}
}