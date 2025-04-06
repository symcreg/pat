#include <iostream>
#include <string>

using namespace std;

int main(){
	string out[]={"ling", "yi","er","san","si","wu","liu","qi","ba","jiu",};
	string num;
	cin>>num;
	int sum=0;
	for(int i = 0; i < num.length(); i++){
		sum += (num[i] - '0');
	}
	string sum_s = to_string(sum);
	for(int i = 0; i < sum_s.length(); i++){
		if (i != 0) cout<<" ";
		cout<<out[sum_s[i]-'0'];
	}
	
	return 0;
}
