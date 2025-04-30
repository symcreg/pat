#include <iostream>
#include <string>
using namespace std;
int main(){
	int k;
	cin>>k;
	string s;
	for(int i = 0; i < k; i++){
		cin>>s;
//		if(s.size() == 1){
//			cout<<"Yes"<<endl;
//			continue;
//		}
		int flag = 0;
		for(int j = 0; j < s.size(); j++){
			string str = s.substr(0, s.size() - j);
			int num = stoi(str);
			if(num % str.size() != 0){
				cout<<"No"<<endl;
				flag = 1;
				break;
			}
		}
		if(flag == 0) cout<<"Yes"<<endl;
	}
	return 0;
}