#include <iostream>

using namespace std;
int main(){
	int k;
	cin>>k;
	int num;
	for(int i = 0; i < k; i++){
		cin>>num;
		int flag = 0;
		for(int a = 1; a < num; a++){
			if(flag) break;
			if(num % a != 0) continue;
			for(int b = a + 1; b < num; b++){
				if(flag) break;
				if(num % b != 0) continue;
				for(int c = b + 1; c < num; c++){
					if(flag) break;
					if(num % c != 0) continue;
					for(int d = c + 1; d <= num; d++){
						if(num % d != 0) continue;
						if((a + b + c + d) % num == 0){
							flag = 1;
							break;
						}
					}
				}
			}
		}
		if(flag) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}