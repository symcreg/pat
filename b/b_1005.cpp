#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
	return a>b;
}

int main(){
	int k = 0;
	cin >> k;
	int num = 0;
	int a[350] = {0};
	vector<int> v(k);
	for(int i = 0; i < k; i++){
		cin >> num;
		v[i] = num;
		while(num != 1){
			if(num%2!=0){
				num = num * 3 +1;
			}
			num /= 2;
			if(a[num]){
				break;
			}
			a[num] = 1;
		}
	}
	int flag = 0;
	sort(v.begin(),v.end(),cmp);
	for(int i = 0; i < v.size(); i++){
		if (a[v[i]] == 0){
			if (flag) {
				cout<<" ";
			}
			cout<<v[i];
			flag = 1;
		}
	}
	
	return 0;
}