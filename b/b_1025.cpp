#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int data_[100005], addr[100005], next_[100005];
int main(){
	int first, n, k, address = 0;
	cin>>first>>n>>k;
	for(int i = 0; i < n; i++){
		cin>>address;
		cin>>data_[address]>>next_[address];
//		cout<<address<<" "<<data[address]<<" "<<next_[address]<<endl;
	}
	int index = 0;
	while(first != -1){
		addr[index++] = first;
		first = next_[first];
//		cout<<addr[index-1]<<endl;
	}
	for(int i = 0; i < (index - index % k); i += k){
		reverse(begin(addr) + i, begin(addr) + i + k);
	}
	for(int i = 0; i < index - 1; i++){
		cout<<setw(5)<<setfill('0')<<addr[i]<<" "<<data_[addr[i]]<<" "<<setw(5)<<setfill('0')<<addr[i+1]<<endl;
	}
	cout<<setw(5)<<setfill('0')<<addr[index - 1]<<" "<<data_[addr[index - 1]]<<" "<<"-1";
	return 0;
}