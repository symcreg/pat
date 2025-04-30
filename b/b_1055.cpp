#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Person{
	string name;
	int height;
};
bool cmp(Person a, Person b){
	if(a.height == b.height){
		return a.name < b.name;
	}
	return a.height > b.height;
}
int main(){
	int n, k, m;
	cin>>n>>k;
	vector<Person> v(n);
	for(int i = 0; i < n; i++){
		cin>>v[i].name>>v[i].height;
	}
	sort(v.begin(), v.end(), cmp);
	int t = 0, row = k;
	while(row){
		if(row == k){ // handle the first output
			m = n - n / k * (k - 1);
		}else{
			m = n / k;
		}
		vector<string> ans(m); // current output
		ans[m / 2] = v[t].name; // the highest one
		// left side
		int j = m / 2 - 1;
		for(int i = t + 1; i < t + m; i += 2){
			ans[j--] = v[i].name;
		}
		// right side
		j = m / 2 + 1;
		for(int i = t + 2; i < t + m; i += 2){
			ans[j++] = v[i].name;
		}
		cout << ans[0];
		for(int i = 1; i < m; i++){
			cout<<" "<<ans[i];
		}
		cout<<endl;
		t += m; // index
		row--; // next line
	}
	return 0;
}