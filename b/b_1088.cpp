#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Node{
	int a = 0;
	int b = 0;
	double c = 0;
};
bool cmp(Node n1, Node n2){
	return n1.a > n2.a;
}
int main(){
	int m, x, y;
	cin>>m>>x>>y;
	vector<Node> v;
	Node t;
	for(int i = 10; i < 100; i++){
//		if(i % 10 == 0) continue;
		t.a = i;
		t.b = 10 * (t.a % 10) + (t.a / 10);
//		if(abs(t.a - t.b) % x != 0) continue;
		t.c = abs(t.a - t.b) * 1.0 / x;
		if(t.c * y == t.b){
			v.push_back(t);
		}
	}
	if(v.size() == 0){
		cout<<"No Solution";
	}else{
		sort(v.begin(), v.end(), cmp);
		cout<<v[0].a<<" ";
		if(v[0].a > m) cout<<"Cong ";
		else if(v[0].a == m) cout<<"Ping ";
		else cout<<"Gai ";
		if(v[0].b > m) cout<<"Cong ";
		else if(v[0].b == m) cout<<"Ping ";
		else cout<<"Gai ";
		if(v[0].c > m) cout<<"Cong";
		else if(v[0].c == m) cout<<"Ping";
		else cout<<"Gai";
	}
//	cout<<v[0].a<<" "<<v[0].b<<" "<<v[0].c<<endl;
	return 0;
}