#include <iostream>
#include <map>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num;
	map<int, int> cnt;
	for(int i = 0; i < n; i++){
		cin>>num;
		if(num % 2 != 0) cnt[num]++;	
	}
	for(auto tmp : cnt){
		if(tmp.second % 2 != 0){
			cout<<tmp.first;
			break;
		}
	}
	return 0;
}