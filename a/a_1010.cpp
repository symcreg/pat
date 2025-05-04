#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

long long conv(string n, long long radix) {
    long long result = 0;
    for (char ch : n) {
        int digit = isdigit(ch) ? ch - '0' : ch - 'a' + 10;
        if (digit >= radix) return -1;
        result = result * radix + digit;
    }
    return result;
}
//long long conv(const string& n, long long radix){
//	long long ret = 0;
//	int idx = 0;
//	for(int i = n.size() - 1; i >= 0; i--){
//		if(n[i] >= '0' && n[i] <= '9'){
//			ret += (n[i] - '0') * pow(radix, idx);
//		}else if(n[i] >= 'a' && n[i] <= 'z'){
//			ret += (n[i] - 'a' + 10) * pow(radix, idx);
//		}
//		idx++;
//	}
//	return ret;
//}
long long find_radix(string n, long long num){
	char max_ele = *max_element(n.begin(), n.end());
	long long low = 1;
	if(max_ele >= '0' && max_ele <= '9') low = max_ele - '0' + 1;
	else if(max_ele >= 'a' && max_ele <= 'z') low = max_ele - 'a' + 10 + 1;
	long high = max(low, num);
//	cout<<"low: "<<low<<" high: "<<high<<endl;
	long long mid = (high + low) / 2;
	while(low <= high){
		long long t = conv(n, mid);
		if(t == num){
			return mid;
		}else if(t > num || t < 0){
			high = mid - 1;
		}else if(t < num){
			low = mid + 1;
		}
		mid = (low + high) / 2;
	}
	return -1;
}
int main(){
	string n1, n2;
	long long tag, radix;
	cin>>n1>>n2>>tag>>radix;
	long long ret = 0;
	if(tag == 1){
		ret = find_radix(n2, conv(n1, radix));
	}else{
		ret = find_radix(n1, conv(n2, radix));
	}
	if(ret == -1){
		cout<<"Impossible";
	}else{
		cout<<ret;
	}
	return 0;
}