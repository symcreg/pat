#include <iostream>
using namespace std;
int main(){
	int n, cnt = 0;
	cin>>n;
	string name, birth, max_name, min_name, max_birth = "2014/09/06", min_birth = "1814/09/06", max = "1814/09/06", min= "2014/09/06";
	for(int i = 0; i < n; i++){
		cin>>name>>birth;
		if(birth >= min_birth && birth <= max_birth){
//			cout<<1<<endl;
			cnt++;
			if(birth >= max){
				max_name = name;
				max = birth;
			}
			if(birth <= min){
				min_name = name;
				min = birth;
			}
		}
	}
	cout<<cnt;
	if(cnt) cout<<" "<<min_name<<" "<<max_name;
	return 0;
}