#include <iostream>
#include <string>
#include <vector>
using namespace std;
string out[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
int main(){
	string num_s;
	cin>>num_s;
	int sum = 0;
	for(int i = 0; i < num_s.size(); i++){
		sum += num_s[i] - '0';
	}
//	cout<<sum<<endl;
	vector<string> output;
	if(sum == 0){
		output.push_back(out[0]);
	}
	else{
		while(sum != 0){
			output.push_back(out[sum % 10]);
			sum /= 10;
		}
	}
//	cout<<output.size()<<endl;
	cout<<output[output.size() - 1];
	for(int i = output.size() - 2; i >= 0; i--){
		cout<<" "<<output[i];
	}
	return 0;
}