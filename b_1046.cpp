#include <iostream>

using namespace std;
int main(){
	int n, jia_cnt = 0, yi_cnt = 0;
	int jia_h, yi_h, jia_hua, yi_hua;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> jia_h >> jia_hua >> yi_h >> yi_hua;
		if(jia_hua == yi_hua) continue;
		
		if(jia_hua == (jia_h + yi_h)) jia_cnt++;
		if(yi_hua == (jia_h + yi_h)) yi_cnt++;
	}
	cout<<yi_cnt<<" "<<jia_cnt;
	return 0;
}