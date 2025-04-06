#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string a, b, res = "";
    cin >> a >> b;

    while(a.length() < b.length()) a = "0" + a;
    while(b.length() < a.length()) b = "0" + b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for(int i = 0; i < b.size(); i++) {
        int t = 0;
        if((i + 1) % 2 == 1){
            t = ((a[i] - '0') + (b[i] - '0')) % 13;
            if(t == 10) res += "J";
            else if(t == 11) res += "Q";
            else if(t == 12) res += "K";
            else res += to_string(t);
        } else {
            t = (b[i] - '0') - (a[i] - '0');
            if(t < 0) t += 10;
            res += to_string(t);
        }
    }

    reverse(res.begin(), res.end());
    cout << res;
    return 0;
}
