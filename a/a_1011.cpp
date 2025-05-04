#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double w, t, l;
	double pro = 0.65;
	int flag = 0;
	for(int i = 0; i < 3; i++){
		cin>>w>>t>>l;
		if(flag) cout<<" ";
		if(w > t && w > l){
			cout<<"W";
			pro *= w;
		}else if(t > w && t > l){
			cout<<"T";
			pro *= t;
		}else{
			cout<<"L";
			pro *= l;
		}
		flag = 1;
	}
	cout<<" "<<fixed<<setprecision(2)<<(pro - 1) * 2;
	return 0;
}