#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
struct Node{
	int addr;
	int data;
	int next;
};
Node list[100005];
int main(){
	int start, n, k;
	cin>>start>>n>>k;
	int addr, data, next;
	for(int i = 0; i < n; i++){
		cin>>addr>>data>>next;
		list[addr].addr = addr;
		list[addr].data = data;
		list[addr].next = next;
	}
	next = start;
	vector<Node> v;
	vector<Node> re;
	while(next != -1){
		v.push_back({next, list[next].data, list[next].next});
		next = list[next].next;
	}
	// re
	for(int i = 0; i < v.size(); i++){
		if(v[i].data < 0) re.push_back(v[i]);
	}
	for(int i = 0; i < v.size(); i++){
		if(v[i].data >= 0 && v[i].data <= k) re.push_back(v[i]);
	}
	for(int i = 0; i < v.size(); i++){
		if(v[i].data > k) re.push_back(v[i]);
	}
	for(int i = 0; i < re.size() - 1; i++){
		cout<<setw(5)<<setfill('0')<<re[i].addr<<" "<<re[i].data<<" "<<setw(5)<<setfill('0')<<re[i+1].addr<<endl;
	}
	cout<<setw(5)<<setfill('0')<<re[re.size() - 1].addr<<" "<<re[re.size() - 1].data<<" -1"<<endl;
	return 0;
}