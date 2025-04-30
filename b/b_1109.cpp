#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Mat{
	int y = 7;
	int x = 5;
	char data[7][5];
};
int main(){
	vector<Mat> list(26);
	for(int i = 0; i < 26; i++){
		for(int j = 0; j < 7; j++){
			for(int k = 0; k < 5; k++){
				cin>>list[i].data[j][k];
			}
		}
	}
	cin.ignore();
	string s;
	vector<string>words;
	getline(cin, s);
	int pos = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] < 'A' || s[i] > 'Z'){
//			cout<<s.substr(pos, i - pos)<<endl;
			words.push_back(s.substr(pos, i - pos));
			pos = i + 1;
		}
	}
	if(pos < s.size()) words.push_back(s.substr(pos));
	for(int i = 0; i < words.size(); i++){
		for(int j = 0; j < 7; j++){
			for(int w = 0; w < words[i].size(); w++){
				for(int k = 0; k < 5; k++){
					cout<<list[words[i][w] - 'A'].data[j][k];
				}
				if(w != words[i].size() - 1) cout<<" ";
			}
			if(j != 6) cout<<endl;
		}
		if(i != words.size() - 1) cout<<endl<<endl;
	}
	return 0;
}