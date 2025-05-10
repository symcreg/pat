#include <iostream>
#include <vector>
using namespace std;
vector<int> person[10000 + 10000];
const int prefix = 10000;
int main(){
	int n, m;
	cin>>n>>m;
	int a, b;
	for(int i = 0; i < m; i++){
		cin>>a>>b;
		if(a < 0) a += prefix;
		if(b < 0) b += prefix;
		person[a].push_back(b);
		person[b].push_back(a);
	}
	int k0;
	cin>>k0;
	for(int i = 0; i < k0; i++){
		cin>>a>>b;
		int gen1 = 1, gen2 = 1;
		if(a < 0){
			gen1 = -1; //girl
			a += prefix;
		}
		if(b < 0){
			gen2 = -1; //girl
			b += prefix;
		}
		vector<int> fri;
		for(int j = 0; j < person[a].size(); j++){
			if((gen1 == -1 && person[a][j] < prefix) || (gen1 == 1 && person[a][j] >= prefix)) continue; //must same gender
			for(int k = 0; k < person[person[a][j]].size(); k++){
				if((gen2 == -1 && person[person[a][j]][k] < prefix) || (gen2 == 1 && person[person[a][j]][k] > prefix)) continue; // must same gender
				for(int l = 0; l < person[person[person[a][j]][k]].size(); l++){
					if(person[person[person[a][j]][k]][l] == b){ // found
						fri.push_back(person[a][j]);
						fri.push_back(person[person[a][j]][k]);
					}
				}
			}
		}
		cout<<fri.size() / 2<<endl;
		for(int j = 0; j < fri.size(); j += 2){
			if(fri[j] >= prefix) fri[j] -= prefix;
			if(fri[j+1] >= prefix) fri[j+1] -= prefix;
			cout<<fri[j]<<" "<<fri[j+1]<<endl;
		}
	}
	return 0;
}