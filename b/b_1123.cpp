#include <iostream>
#include <string>

using namespace std;
string s;
string zeros(200, '0');
int comple(string& s){
	int pos = s.find('.');
	if(pos == string::npos){
		s = s + "." + zeros;
	}else{
		s = s + zeros;
	}
	pos = s.find('.');
	return pos;
}
int main(){
	int n, d;
	cin >> n >> d;
	for(int i = 0; i < n; i++){
		int order;
		cin >> order >> s;
		int pos = comple(s) + d;
//		cout<<s<<" "<<pos<<endl;
		int neg = 0;
		if(s[0] == '-'){
			neg = 1;
			s.erase(0, 1);
			pos--;
		}
		if(order == 1){
			if((s[pos + 1] - '0') >= 5){
				s[pos]++;
			}
//			s = s.substr(0, pos + 1);
		}else if(order == 2){
//			s = s.substr(0, pos + 1);
		}else{
			if((s[pos + 1] - '0') > 5){
				s[pos]++;
			}else if((s[pos + 1] - '0') == 5){
				int flag = 0;
				for(int j = pos + 2; j < s.size(); j++){
					if((s[j] - '0') != 0){
						flag = 1;
					}
				}
				if(flag == 1) s[pos]++;
				else if((s[pos] - '0') % 2 == 1) s[pos]++;
			}
		}
		if(order != 2){
			int carry = 0;
			for(int j = s.size() - 1; j >= 0; j--){
				if(s[j] == '.') continue;
				int digit = s[j] - '0' + carry;
				s[j] = digit % 10 + '0';
				carry = digit / 10;
			}
			if(carry){
				s = "1" + s;
				pos++;
			}
//			cout<<s<<endl;
		}
		s = s.substr(0, pos + 1);
		int neg_z = 0;
		if(neg){
			for(int j = 1; j < s.size(); j++){
				if((s[j] - '0') != 0 && s[j] != '.'){
					neg_z = 1;
				}
			}
		}
		if(neg_z == 1){
			s = "-" + s;
		}
		cout<<s<<endl;
	}
	
	return 0;
}