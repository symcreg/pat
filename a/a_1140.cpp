#include <iostream>
#include <string>
using namespace std;
int main(){
	string d;
	int n;
	cin>>d>>n;
	for(int i = 0; i < n - 1; i++){
		int cnt = 1;
		string t = "";
		char pre = d[0];
		for(int j = 1; j < d.size(); j++){
			if(d[j] == pre) cnt++;
			else{
				t += pre;
				t += cnt + '0';
				cnt = 1;
			}
			pre = d[j];
		}
		t += pre;
		t += cnt + '0';
		d = t;
//		cout<<t<<endl;
	}
	cout<<d;
	return 0;
}