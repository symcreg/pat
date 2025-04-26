#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b){
	return a > b;
}
int main(){
	int n;
	cin>>n;
	map<int, int> m;
	vector<int> seq;
	int num;
	
	for(int i = 0; i < n; i++){
		cin>>num;
		num = num - (i + 1);
		if(num < 0) num = -num;
		if(m[num] == 0) seq.push_back(num);
		m[num]++;
	}
	sort(seq.begin(), seq.end(), cmp);
	for(int i = 0; i < seq.size(); i++){
		if(m[seq[i]] > 1)
			cout<<seq[i]<<" "<<m[seq[i]]<<endl;
	}
	
	return 0;
}