#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> seq(n);
	for(int i = 0; i < n; i++){
		cin>>seq[i];
	}
	sort(seq.begin(), seq.end());
	vector<int> subseqa(seq.begin(), seq.begin() + n / 2);
	vector<int> subseqb(seq.begin() + n / 2, seq.end());
	cout<<abs(int(subseqa.size() - subseqb.size()))<<" ";
	int suma = 0, sumb = 0;
	for(int i = 0; i < subseqa.size(); i++) suma += subseqa[i];
	for(int i = 0; i < subseqb.size(); i++) sumb += subseqb[i];
	cout<<abs(suma - sumb);
	return 0;
}