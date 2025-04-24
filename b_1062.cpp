#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct Num{
	int a;
	int b;
};
bool h(Num n){
	return __gcd(n.a, n.b) == 1;
}
int cmp(Num n1, Num n2){
    long long left = (long long)n1.a * n2.b;
    long long right = (long long)n2.a * n1.b;
    if(left == right) return 0;
    else if(left < right) return -1;
    else return 1;
}
int main(){
	int k;
	string s1, s2;
	Num n1, n2;
	cin>>s1>>s2>>k;
	int pos1 = s1.find('/');
	n1.a = stoi(s1.substr(0, pos1));
	n1.b = stoi(s1.substr(pos1+1));
	int pos2 = s2.find('/');
	n2.a = stoi(s2.substr(0, pos2));
	n2.b = stoi(s2.substr(pos2+1));
	if(cmp(n1, n2) == 1){
		swap(n1, n2);
	}
	Num x;
	x.b = k;
	int space = 0;
	for(int i = 1; i < k;i++){
		x.a = i;
		if(cmp(x, n1) == 1 && cmp(n2, x) == 1 && h(x)){
			if(space) cout<<" ";
			cout<<x.a<<"/"<<x.b;
			space = 1;
		}
	}
	return 0;
}