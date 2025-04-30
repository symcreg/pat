#include <iostream>
using namespace std;
int main(){
	int n, ori[105] = {0}, check[105] = {0}, in[105] = {0}, mer[105] = {0};
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>ori[i];
		mer[i] = ori[i];
	}
	for(int i = 0; i < n; i++){
		cin>>check[i];
	}
	for(int i = 0; i < n - 1; i += 2){
		if(mer[i] < mer[i + 1]){
			swap(mer[i], mer[i+1]);
		}
		for(int j = 0; j < n; j++){
			cout<<mer[j];
		}
		cout<<endl;
	}
	return 0;
}