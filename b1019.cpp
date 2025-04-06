#include <iostream>
#include <algorithm>
bool cmp(char a, char b){
	return a > b;
}
using namespace std;
int main(){
	string sn, sa, sb;
	int a = 0, b = 0, result = 0;
	cin >> sn;
	sn.insert(0, 4-sn.size(), '0');
	do{
		sa = sn;
		sb = sn;
		sort(sa.begin(),sa.end(),cmp);
		sort(sb.begin(),sb.end());
		result = stoi(sa) - stoi(sb);
		sn = to_string(result);
		sn.insert(0, 4-sn.size(), '0');
		cout<<sa<<" - "<<sb<<" = "<<sn<<endl;
	}while(result != 6174 && result != 0);
}