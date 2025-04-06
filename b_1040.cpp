//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
//	long long int sum = 0;
//	string s;
//	cin >> s;
//	if(s.size() < 3){
//		cout << 0;
//		return 0;
//	}
//	for(int i = 0; i < s.size() - 2; i++){
//		if(s[i] != 'P'){
//			continue;
//		}else{
//			for(int j = i + 1; j < s.size() - 1; j++){
//				if(s[j] != 'A'){
//					continue;
//				}else{
//					for(int k = j + 1; k < s.size(); k++){
//						if(s[k] != 'T'){
//							continue;
//						}else{
//							sum++;
//						}
//					}
//				}
//			}
//		}
//	}
//	cout << sum % 1000000007;
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main(){
//	
//	long long int sum = 0;
//	string s;
//	cin >> s;
//	vector<int> p, a, t;
//	if(s.size() < 3){
//		cout << 0;
//		return 0;
//	}
//	
//	for(int i = 0; i < s.size(); i++){
//		if(s[i] == 'P') p.push_back(i);
//		if(s[i] == 'A') a.push_back(i);
//		if(s[i] == 'T') t.push_back(i);
//	}
//	for(int i = 0; i < p.size(); i++){
//		for(int j = 0; j < a.size(); j++){
//			if(a[j] < p[i]) continue;
//			for(int k = 0; k < t.size(); k++){
//				if(t[k] < a[j]) continue;
//				sum++;
//			}
//		}
//	}
//	cout << sum % 1000000007;
//	
//	return 0;
//}

#include <iostream>
#include <string>

using namespace std;
int main(){
	int sum = 0;
	int cp = 0, ca = 0, ct = 0;
	string s;
	cin>>s;
	if(s.size() < 3){
		cout << 0;
		return 0;
	}
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'T') ct++;
	}
	for(int i = 0; i < s.size() - 2; i++){
		if(s[i] == 'P') cp++;
		if(s[i] == 'T') ct--;
		if(s[i] == 'A') sum = (sum + (cp * ct % 1000000007)) % 1000000007;
	}
	cout << sum;
	return 0;
}