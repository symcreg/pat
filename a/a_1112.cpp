#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
    int k;
    cin >> k;
    string sen;
    cin >> sen;

    map<char, int> stuck;
    vector<char> list;
    string result;

    for (int i = 0; i < sen.size(); ) {
        char ch = sen[i];
        int cnt = 1;

        int j = i + 1;
        while (j < sen.size() && sen[j] == ch) {
            cnt++;
            j++;
        }

        if (cnt % k == 0) {
            if (stuck.find(ch) == stuck.end()) {
                stuck[ch] = 1;
                list.push_back(ch);
            }
        } else {
            stuck[ch] = -1;
        }

        if (stuck[ch] == 1) {
            for (int m = 0; m < cnt / k; m++) {
                result += ch;
            }
        } else {
            result += sen.substr(i, cnt);
        }

        i = j;
    }
    for (char c : list) {
        cout << c;
    }
    if(list.size() != 0) cout << endl;

    cout << result << endl;

    return 0;
}
