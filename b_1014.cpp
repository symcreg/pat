#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
	string week[] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int i=0,w=0,h=0,m=0;
	while(i < s1.size() && i < s2.size()){
		if(s1[i]==s2[i] && (s1[i] >= 'A' && s1[i] <= 'G')){
			w = s1[i] - 'A';
			break;
		}
		i++;
	}
	i++;
	while(i < s1.size() && i < s2.size()){
		if(s1[i]==s2[i]){
			if(s1[i] >= '0' && s1[i] <= '9'){
				h = s1[i] - '0';
				break;
			}else if(s1[i] >= 'A' && s1[i] <= 'N'){
				h = s1[i] - 'A' + 10;
				break;
			}
		}
		i++;
	}
	for(i = 0; i < s3.size() && i < s4.size(); i++){
		if(s3[i] == s4[i] && ((s3[i] >= 'a' && s3[i] <= 'z')|| (s3[i] >= 'A' && s3[i] <= 'Z'))){
			m = i;
			break;
		}
	}
	cout << week[w] << " " << setw(2) << setfill('0') << h << ":" 
	<< setw(2) << setfill('0') << m << endl;
	return 0;
}