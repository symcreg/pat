#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
string m, d, y;
map<string, string> conv = {{"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec","12"}};
int main(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>m>>d>>y;
		m = conv[m];
		d.erase(d.end()-1);
		if(d.size() == 1) d = "0" + d;
		while(y.size() < 4) y = "0" + y;
		string com = y + m + d;
		string com_r = com;
		reverse(com_r.begin(), com_r.end());
//		cout<<com<<" "<<com_r<<endl;
		if(com == com_r){
			cout<<"Y ";
		}else{
			cout<<"N ";
		}
		cout<<com<<endl;
	}
	return 0;
}