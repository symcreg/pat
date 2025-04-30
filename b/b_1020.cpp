#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
struct MoonCake{
	float num;
	float prize;
	float per;
};
bool cmp(MoonCake c1, MoonCake c2){
	return c1.per > c2.per;
}
int main(){
	int n, d;
	cin>>n>>d;
	vector<MoonCake> v(n);
	for(int i = 0; i < n; i++){
		cin>>v[i].num;
	}
	for(int i = 0; i < n; i++){
		cin>>v[i].prize;
		v[i].per = (float)v[i].prize / v[i].num;
	}
	sort(v.begin(), v.end(), cmp);
	
	float result = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i].num <= d){
			result += v[i].prize;
		}else{
			result += v[i].per * d;
			break;
		}
		d -= v[i].num;
	}
	cout<<fixed<<setprecision(2)<<result;
	return 0;
}