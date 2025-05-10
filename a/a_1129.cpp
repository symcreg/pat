#include <iostream>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;
struct Item{
	int id;
	int cnt;
	
	bool operator<(const Item& other) const{
		if(cnt != other.cnt){
			return cnt > other.cnt;
		}else{
			return id < other.id;
		}
	}
};
int main(){
	int n, k;
	cin>>n>>k;
	set<Item> items;
	unordered_map<int, int> count;
	int q;
	for(int i = 0; i < n; i++){
		int flag = 0;
		cin>>q;
		if(items.size() != 0) cout<<q<<": ";
		int tmp = 0;
		for(auto it = items.begin(); it != items.end() && tmp < k; it++){
//		for(int j = 0; j < items.size() && j < k; j++){
			if(flag) cout<<" ";
			cout<<it->id;
			flag = 1;
			tmp++;
		}
		if(flag) cout<<endl;
		auto it = items.find({q, count[q]});
		count[q]++;
		if(it != items.end()){
			items.erase(it);
		}
		items.insert({q, count[q]});
	}
}