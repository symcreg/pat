#include <iostream>
#include <vector>
using namespace std;
struct Node{
	int x1;
	int x2;
};
int main(){
	int n, t;
	cin>>n>>t;
	int max = -1;
	int val;
	vector<Node> v;
	int out = 0;
	int pre = 0;
	for(int i = 0; i < n; i++){
		cin>>val;
		if(val > t && out == 0){
			pre = i;
			out = 1;
		}else if(val <= t && out == 1){
			v.push_back({pre, i-1});
			out = 0;
		}
		if(val > max) max = val;
	}
	if(out == 1){
		v.push_back({pre, n-1});
	}
	if(v.size() == 0){
		cout<<max;
	}else{
		for(int i = 0; i < v.size(); i++){
			cout<<"["<<v[i].x1<<", "<<v[i].x2<<"]"<<endl;
		}
	}
	return 0;
}