#include <iostream>
#include <string>
using namespace std;
int main(){
	int n, d;
	cin>>n>>d;
	int order;
	string s;
	for(int i = 0; i < n; i++){
		cin>>order>>s;
		int pos = s.find('.') + d + 1;
//		cout<<s[pos]<<endl;
//		cout<<s.substr(0, pos)<<endl;
		if(order == 1){
			if((s[pos] - '0') >= 5) s[pos-1]++;
			s = s.substr(0, pos);
			cout<<s<<endl;
		}else if(order == 2){
			s = s.substr(0, pos);
			cout<<s<<endl;
		}else{
			if((s[pos] - '0') < 5){
				s = s.substr(0, pos);
			}else if((s[pos] - '0') > 5){
				s[pos-1]++;
				s = s.substr(0, pos);
			}else{
				
			}
		}
	}
	return 0;
}