#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, k, x;
	cin>>n>>k>>x;
	vector<vector<int>> matrix(n, vector<int>(n));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>matrix[i][j];
		}
	}
	
	int flag = 0;
	for(int i = 0; i < n; i++){
		int sum = 0;
		int offset = 1;
		for(int j = 0; j < n; j++){
			if((j + 1) % 2 == 1){
				offset = ((j + 1) / 2 + 1) % (k);
				if(offset == 0) offset = k;
				if(i + 1 <= offset){
//					cout<<x<<endl;
					sum += x;
				}else{
//					cout<<matrix[j][i - offset]<<endl;
					sum += matrix[j][i - offset];
				}
			}else{
//				cout<<matrix[j][i]<<endl;
				sum += matrix[j][i];
			}
		}
//		cout<<endl;
		if(flag) cout<<" ";
		cout<<sum;
		flag = 1;
	}
	return 0;
}