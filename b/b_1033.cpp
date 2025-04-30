#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	string b, s;
//	cin>>b>>s;
//	
	getline(cin, b);
	getline(cin, s);
	map<char, int> b_m;
	int u_b = 0;
	int e = 0;
	int x = 'A' - 'a';
	for(int i = 0; i < b.size(); i++){
		b_m[b[i]]++;
		if(b[i] == '+'){
			u_b = 1;
		}
		if(b[i] >= 'A' && b[i] <= 'Z'){
			b_m[b[i] - x]++;
		}
	}
	for(int i = 0; i < s.size(); i++){
		if(b_m[s[i]] == 0){
//			cout<<"1";
			if(u_b == 1){
//				cout<<s[i];
				if(s[i] < 'A' || s[i] > 'Z'){
					e = 1;
					cout<<s[i];
				}
			}else{
				e = 1;
				cout<<s[i];
			}
		}
	}
//	if(e == 0){
//		cout<<endl;
//	}
	return 0;
}

//#include <iostream>
//#include <string>
////#include <cctype>
//using namespace std;
//int main(){
//	string bad, sen;
////	cin>>bad>>sen;
//	getline(cin, bad);
//	getline(cin, sen);
//	for(int i = 0; i < sen.size(); i++){
//		if(bad.find(toupper(sen[i])) != string::npos){
//			continue;
//		}
//		if(bad.find('+') != string::npos && isupper(sen[i])){
//			continue;
//		}
//		cout<<sen[i];
//	}
//}