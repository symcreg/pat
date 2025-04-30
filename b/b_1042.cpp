#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	int cnt[26] = {0};
	for(int i = 0; i < s.size(); i++){
		if(isupper(s[i])){
			cnt[s[i] - 'A']++;
		}
		if(islower(s[i])){
			cnt[s[i] - 'a']++;
		}
	}
	int max = -1;
	int index = 0;
	for(int i = 0; i < 26; i++){
		if(cnt[i] > max){
			max = cnt[i];
			index = i;
		}
	}
	cout << (char)('a' + index) << " " << max;
	return 0;
}