#include <iostream>
#include <map>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int, int> m;
	int t = 0;
	for(int i = 1; i <= n; i++){
		t = int(i / 2.0) + int(i / 3.0) + int(i / 5.0);
		if(m[t] == 0){
			m[t]++;
		}
	}
	cout<<m.size();
	return 0;
}