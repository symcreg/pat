#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Node{
	string id;
	int price;
	int num;
	int total;
};
int main(){
	int n;
	cin>>n;
	vector<Node> nodes(n);
	string m_n_s, m_t_s;
	int m_n = -1, m_t = -1;
	for(int i = 0; i < n; i++){
		cin>>nodes[i].id>>nodes[i].price>>nodes[i].num;
		nodes[i].total = nodes[i].price * nodes[i].num;
		if(m_n < nodes[i].num){
			m_n = nodes[i].num;
			m_n_s = nodes[i].id;
		}
		if(m_t < nodes[i].total){
			m_t = nodes[i].total;
			m_t_s = nodes[i].id;
		}
	}
	cout<<m_n_s<<" "<<m_n<<endl;
	cout<<m_t_s<<" "<<m_t<<endl;
	return 0;
}