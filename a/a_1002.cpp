#include <iostream>
#include <iomanip>
using namespace std;
double polya[1001];
double polyb[1001];
double polyc[1001];
int main(){
	int k = 0;
	cin>>k;
	int exp = 0;
	double coe = 0;
	for(int i = 0; i < k; i++){
		cin>>exp>>coe;
		polya[exp] = coe;
//		cout<<"-1-"<<endl;
	}
//	cin.ignore();
	cin>>k;
	for(int i = 0; i < k; i++){
		cin>>exp>>coe;
		polyb[exp] = coe;
//		cout<<"-2-"<<endl;
	}
	int cnt = 0;
	for(int i = 0; i < 1001; i++){
		polyc[i] = polya[i] + polyb[i];
		if(polyc[i] != 0) cnt++;
	}
	cout<<cnt;
	for(int i = 1000; i >= 0; i--){
		if(polyc[i] != 0){
			cout<<" ";
			cout<<fixed<<setprecision(1)<<i<<" "<<polyc[i];
		}
		
	}
	return 0;
}