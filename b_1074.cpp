#include <iostream>
#include <string>
using namespace std;
int main(){
	string tables;
	cin>>tables;
	int table[25] = {0};
	for(int i = 0; i < 25; i++) table[i] = 10;
	for(int i = 0; i < tables.size(); i++){
		table[i] = tables[tables.size() - 1 - i] - '0';
		if(table[i] == 0){
			table[i] = 10;
		}
	}
	string n1s, n2s;
	cin>>n1s>>n2s;
	int n1[25] = {0}, n2[25] = {0};
	for(int i = 0; i < n1s.size(); i++){
		n1[i] = n1s[n1s.size() - 1 - i] - '0';
//		cout<<n1[i];
	}
//	cout<<endl;
	for(int i = 0; i < n2s.size(); i++){
		n2[i] = n2s[n2s.size() - 1 - i] - '0';
//		cout<<n2[i];
	}
//	cout<<endl;
	int carry[30] = {0};
//	int size = n1s.size();
//	size < n2s.size() ? size = n2s.size() : 0;
//	cout<<size<<endl;
	int result[25] = {0};
	for(int i = 0; i < 25; i++){
		carry[i + 1] = (n1[i] + n2[i] + carry[i]) / table[i];
		result[i] =  (n1[i] + n2[i] + carry[i]) % table[i];
//		cout<<carry[i]<<" ";
	}
//	cout<<endl;
	int flag = 0;
	for(int i = 25-1; i >= 0; i--){
		if(result[i] || flag){
			cout<<result[i];
			flag = 1;
		}
	}
	if(flag == 0) cout<<0;
	return 0;
}