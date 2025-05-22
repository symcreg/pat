#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
#define MAX_SIZE 10005
int parent[MAX_SIZE];
int cnt[MAX_SIZE];
int find(int x){
	if(parent[x] != x) parent[x] = find(parent[x]);
	return parent[x];
}
void unite(int x, int y){
	int fx = find(x), fy = find(y);
	if(fx != fy) parent[fy] = fx;
}
int main(){
	int n;
	cin>>n;
	for(int i = 0; i < MAX_SIZE; i++) parent[i] = i;
	map<int, bool> used;
	for(int i = 0; i < n; i++){
		int k;
		cin>>k;
		vector<int> temp(k);
		for(int j = 0; j < k; j++){
			cin>>temp[j];
			used[temp[j]] = true;
		}
		for(int j = 1; j < k; j++){
			unite(temp[0], temp[j]);
		}
	}
//	for(int i = 0; i < MAX_SIZE; i++) find(i);
	for(int i = 0; i < MAX_SIZE; i++){
		if(used[i] == true){
			int root = find(i);
			cnt[root]++;
		}
	}
	int numTrees = 0, numBirds = 0;
	for(int i = 0; i < MAX_SIZE; i++){
		if(used[i] == true && cnt[i] > 0){
			numTrees++;
			numBirds += cnt[i];
		}
	}
	cout<<numTrees<<" "<<numBirds<<endl;
	int q;
	cin>>q;
	for(int i = 0; i < q; i++){
		int a, b;
		cin>>a>>b;
		if(find(a) == find(b)){
			cout<<"Yes";
		}else{
			cout<<"No";
		}
		cout<<endl;
	}
	return 0;
}