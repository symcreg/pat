#include <iostream>
#include <string>
using namespace std;
int main(){
	int sum = 0, o = 0, z = 0;
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		if(islower(s[i])){
			sum += s[i] - 'a' + 1;
		}else if(isupper(s[i])){
			sum += s[i] - 'A' + 1;
		}
	}
	while(sum != 0){
		if(sum % 2 == 0){
			z++;
		}else{
			o++;
		}
		sum /= 2;
	}
	cout<<z<<" "<<o;
	return 0;
}