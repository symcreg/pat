#include <iostream>

using namespace std;
int main(){
	int n;
	char c;
	cin>>n>>c;
	int w = n;
	int h = (n + 1) / 2;
	char o = c;
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			if(i == 0 || i == h - 1 || j == 0 || j == w - 1){
				o = c;
			}else{
				o = ' ';
			}
			cout<<o;
		}
		cout<<endl;
	}
	return 0;
}