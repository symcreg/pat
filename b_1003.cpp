#include <iostream>
#include <string>
#include <map>

using namespace std;
int main(){
	int n = 0;
	cin >> n;
	string s;
	int p = 0, t = 0;
	for(int i = 0; i < n; i++){
		cin >> s;
		map<char, int> m;
		for (int j = 0; j < s.size(); j++){
			m[s[j]]++;
			if (s[j] == 'P') p = j;
			if (s[j] == 'T') t = j;
		}
		if(m['P'] == 1 && m['T']==1 && m['A'] != 0 && m.size()==3 && (t-p) != 1 && (t-p-1) * p == (s.length()-1 - t)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
