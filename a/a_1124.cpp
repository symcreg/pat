#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
	int m, n, s;
	cin>>m>>n>>s;
	string fol;
	map<string, bool> win;
	int cnt = 0;
	for(int i = 0; i < m; i++){
		cin>>fol;
		if(i + 1 == s + n * cnt){
			if(win.find(fol) == win.end()){
				cout<<fol<<endl;
				win[fol] = true;
				cnt++;
			}else{
				s++;
			}
		}
	}
	if(cnt == 0) cout<<"Keep going...";
	return 0;
}