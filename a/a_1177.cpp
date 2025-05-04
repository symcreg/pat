#include <iostream>
#include<climits>
#include <string>
using namespace std;
int main(){
	string s, k, ret;
	cin>>s>>k;
	int idx = 0, pos_l = -1, pos_r = -1, min = INT_MAX;
	char ch;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == k[0]){
//			cout<<"found"<<endl;
			idx = 0; pos_l = -1; pos_r = -1;
			for(int j = i; j < s.size(); j++){
				ch = k[idx];
//				cout<<ch<<endl;
				if(s[j] == ch){
					
					if(pos_l == -1) pos_l = j;
					idx++;
				}
				if(idx == k.size()){
//					cout<<"found"<<endl;
					pos_r = j;
					if((pos_r - pos_l + 1) < min){
						min = (pos_r - pos_l + 1);
						ret = s.substr(pos_l, pos_r - pos_l + 1);
					}
					break;
				}
			}
		}
	}
	cout<<ret;
	
	return 0;
}