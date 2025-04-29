#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int m, n;
	cin>>m>>n;
	int cnt = 0;
	for(int i = m; i <= n; i++){
		int a = i;
		int n1 = pow(a,3) - pow(a-1,3);
		int c = sqrt(n1);
		if(n1 % c != 0) continue;
		for(int j = 1; j < c; j++){
			if(pow(j, 2) + pow(j-1, 2) == c){
				cout<<a<<" "<<j<<endl;
				cnt++;
				break;
			}
			if(pow(j, 2) + pow(j-1, 2) > c) break;
		}
	}
	if(cnt == 0) cout<<"No Solution"<<endl;
	return 0;
}