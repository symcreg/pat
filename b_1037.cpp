#include <iostream>
#include <string>
using namespace std;
int main(){
	long long int g1, s1, k1, g2, s2, k2, t1, t2;
	string str1, str2;
	cin >> str1 >> str2;
	int pos = 0, pos2 = 0;
	while(str1[pos] != '.'){
		pos++;
	}
	pos2 = pos + 1;
	while(str1[pos2] != '.'){
		pos2++;
	}
	g1 = stoi(str1.substr(0, pos));
	s1 = stoi(str1.substr(pos + 1, pos2));
	k1 = stoi(str1.substr(pos2 + 1));
//	cout<<g1<<" "<<s1<<" "<<k1;
	pos = 0;
	pos2 = 0;
	while(str2[pos] != '.'){
		pos++;
	}
	pos2 = pos + 1;
	while(str2[pos2] != '.'){
		pos2++;
	}
	g2 = stoi(str2.substr(0, pos));
	s2 = stoi(str2.substr(pos + 1, pos2));
	k2 = stoi(str2.substr(pos2 + 1));
//	{
//		cout<<g1<<" "<<s1<<" "<<k1<<endl;
//		cout<<g2<<" "<<s2<<" "<<k2<<endl;
//	}
	t1 = g1 * 17 * 29 + s1 * 29 + k1;
	t2 = g2 * 17 * 29 + s2 * 29 + k2;
//	cout<<t1<<" "<<t2<<endl;
	int res = t2 - t1;
	int r_g = 0, r_s = 0, r_k = 0;
//	cout<<res<<endl;
	r_g = res / (17 * 29);
	res %= (17 * 29);
	r_s = res / 29;
	r_k = res % 29;
	if(r_s < 0) r_s = - r_s;
	if(r_k < 0) r_k = - r_k;
	cout<<r_g<<"."<<r_s<<"."<<r_k; 
	
	return 0;
}