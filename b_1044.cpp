#include <iostream>
#include <string>
using namespace std;
int main(){
	string l[] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	string h[] = {"", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++){
		string s;
		getline(cin, s);
//		cin>>s;
		int p1 = 0, p2 = 0, num = 0;
//		cout<<s<<endl;
		if(s[0] >= '0' && s[0] <= '9'){
//			cout<<s<<endl;
			num = stoi(s);
			p1 = num / 13;
			p2 = num % 13;
			if(p1 > 0) cout << h[p1];
			if(p1 > 0 && p2 > 0) cout << " ";
			if(p2 > 0 || num == 0) cout<<l[p2];
		}else{
			size_t space_pos = s.find(' ');
			if(space_pos != string::npos){
				string high = s.substr(0, space_pos);
				string low = s.substr(space_pos+1);
				for(int j = 1; j < 13; j++){
					if(h[j] == high){
						p1 = j;
					}
					if(l[j] == low){
						p2 = j;
					}
				}
			}else{
				for(int j = 0; j < 13; j++){
					if(h[j] == s){
						p1 = j;
					}
					if(l[j] == s){
						p2 = j;
					}
				}
			}
			cout << p1 * 13 + p2;
		}
		if(i < n - 1) cout<<endl;
	}
	return 0;
}