#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main(){
	int n;
	double e, d;
	int r1 = 0, r2 = 0;
	cin>>n>>e>>d;
	for(int i = 0; i < n; i++){
		int k, cnt = 0;
		cin>>k;
		vector<double> v(k);
		for(int j = 0; j < k; j++){
			cin>>v[j];
			if(v[j] < e){
				cnt++;
			}
		}
		if(cnt > k / 2){
			if(k > d){
				r2++;
			}else{
				r1++;
			}
		}
	}
	cout<<fixed<<setprecision(1)<<(double)r1*100/n<<"%"<<" "<<fixed<<setprecision(1)<<(double)r2*100/n<<"%";
	return 0;
}