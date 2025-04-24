#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
struct Node{
	int data;
	int next;
};
Node list[100005];
Node result[100005];
int main(){
	int start, n, k;
	cin>>start>>n>>k;
	int addr;
	for(int i = 0; i < n; i++){
		cin>>addr;
		cin>>list[addr].data>>list[addr].next;
	}
	vector<int> neg;
	vector<int> less;
	vector<int> left;
	int next = start;
	while(next != -1){
		if(list[next].data < 0){
			neg.push_back(next);
		}else if(list[next].data <= k){
			less.push_back(next);
		}else{
			left.push_back(next);
		}
		next = list[next].next;
	}
//	cout<<neg.size()<<" "<<less.size()<<" "<<left.size()<<endl;
	if(neg.size() != 0) next = neg[0];
	else if(less.size() != 0) next = less[0];
	else next = left[0];
	vector<int> seq;
	for(int i = 0; i < neg.size(); i++) seq.push_back(neg[i]);
	for(int i = 0; i < less.size(); i++) seq.push_back(less[i]);
	for(int i = 0; i < left.size(); i++) seq.push_back(left[i]);
//	cout<<seq.size()<<endl;
	for(int i = 0; i < seq.size(); i++){
		result[seq[i]].data = list[seq[i]].data;
		if(i+1 < seq.size()) result[seq[i]].next = seq[i+1];
		else result[seq[i]].next = -1;
//		cout<<result[seq[i]].data<<endl;
	}
	while(next != -1){
		cout<<setw(5)<<setfill('0')<<next<<" "<<result[next].data<<" ";
		if(result[next].next != -1) cout<<setw(5)<<setfill('0')<<result[next].next<<endl;
		else cout<<-1;
		next = result[next].next;
	}
	return 0;
}