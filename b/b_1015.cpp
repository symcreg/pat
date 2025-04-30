#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Node{
	int id;
	int a;
	int b;
};
bool cmp(Node n1, Node n2){
	if((n1.a + n1.b) != (n2.a + n2.b)){
		return (n1.a+n1.b) > (n2.a+n2.b);
	}else if(n1.a != n2.a){
		return n1.a > n2.a;
	}else{
		return n1.id < n2.id;
	}
}
int main(){
	int n,l,h;
	cin>>n>>l>>h;
	vector<Node>v1,v2,v3,v4;
	Node node;
	for(int i = 0; i < n; i++){
		cin>>node.id>>node.a>>node.b;
		if(node.a >= l && node.b >= l){
			if(node.a >= h && node.b >= h){
				v1.push_back(node);
				continue;
			}
			if(node.a >= h && node.b < h){
				v2.push_back(node);
				continue;
			}
			if(node.a < h && node.b < h && node.a >= node.b){
				v3.push_back(node);
				continue;
			}
			v4.push_back(node);		
		}
	}
//	cout<<v1.size()<<v2.size()<<v3.size()<<v4.size();
	sort(v1.begin(),v1.end(),cmp);
	sort(v2.begin(),v2.end(),cmp);
	sort(v3.begin(),v3.end(),cmp);
	sort(v4.begin(),v4.end(),cmp);
	int cnt = v1.size()+v2.size()+v3.size()+v4.size();
	cout<<cnt<<endl;;
	for(int i = 0; i < v1.size(); i++){
		cout<<v1[i].id<<" "<<v1[i].a<<" "<<v1[i].b<<endl;
	}
	for(int i = 0; i < v2.size(); i++){
		cout<<v2[i].id<<" "<<v2[i].a<<" "<<v2[i].b<<endl;
	}
	for(int i = 0; i < v3.size(); i++){
		cout<<v3[i].id<<" "<<v3[i].a<<" "<<v3[i].b<<endl;
	}
	for(int i = 0; i < v4.size(); i++){
		cout<<v4[i].id<<" "<<v4[i].a<<" "<<v4[i].b<<endl;
	}
	return 0;
}