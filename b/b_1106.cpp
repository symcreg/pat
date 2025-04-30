#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> seq;
	seq.push_back(2);
	seq.push_back(0);
	seq.push_back(1);
	seq.push_back(9);
	for(int i = 4; i < n; i++){
		seq.push_back( (seq[i-1] + seq[i-2] + seq[i-3] + seq[i-4]) % 10 );
	}
	for(int i = 0; i < seq.size() && i < n; i++){
		cout<<seq[i];
	}
	return 0;
}