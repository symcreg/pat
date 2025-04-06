// stack
#include <iostream>
#include <stack>
using namespace std;
int main(){
	string s;
	stack<string> w;
	while(cin>>s){
		w.push(s);
	}
	cout<<w.top();
	w.pop();
	while(!w.empty()){
		cout<<" ";
		cout<<w.top();
		w.pop();
	}
	return 0;
}