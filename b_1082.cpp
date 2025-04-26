#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int id, x, y;
	int max_id;
	int min_id;
	double max_dis = -1;
	double min_dis = 1e5;
	for(int i = 0; i < n; i++){
		cin>>id>>x>>y;
		double dis = sqrt(x*x+y*y);
		if(dis > max_dis){
			max_dis = dis;
			max_id = id;
		}
		if(dis < min_dis){
			min_dis = dis;
			min_id = id;
		}
	}
	cout<<setw(4)<<setfill('0')<<min_id<<" "<<setw(4)<<setfill('0')<<max_id;
	
	return 0;
}