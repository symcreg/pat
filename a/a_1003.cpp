#include <iostream>
#include <algorithm>
using namespace std;
int weight[510], adj[510][510], dis[510], w[510], num[510];
bool visit[510];
const int inf = 999999;
int main(){
	int n, m, c1, c2;
	cin>>n>>m>>c1>>c2;
	for(int i = 0; i < n; i++){
		cin>>weight[i];
	}
	fill(adj[0], adj[0] + 510 * 510, inf);
	int a, b, c;
	for(int i = 0; i < m; i++){
		cin>>a>>b>>c;
		adj[a][b] = adj[b][a] = c;
	}
	fill(dis, dis + 510, inf);
	dis[c1] = 0;
	w[c1] = weight[c1];
	num[c1] = 1;
	for(int i = 0; i < n; i++){
		int u = -1;
		int dis_min = inf;
		// step 1 find the shortest one in un visit set
		for(int j = 0; j < n; j++){
			if(visit[j] == false && dis[j] < dis_min){
				u = j;
				dis_min = dis[j];
			}
		}
		// mark u is visited
		visit[u] = true;
		// step 2 expand dis to neighbors of u
		for(int v = 0; v < n; v++){
			if(visit[v] == false && adj[u][v] != inf){
				if(dis[u] + adj[u][v] < dis[v]){
					dis[v] = dis[u] + adj[u][v];
					num[v] = num[u]; // heritage from u
					w[v] = weight[v] + w[u];
				}else if(dis[u] + adj[u][v] == dis[v]){
					num[v] = num[u] + num[v];
					if(weight[v] + w[u] > w[v]){
						w[v] = weight[v] + w[u];
					}
				}
			}
		}
	}
	cout<<num[c2]<<" "<<w[c2];
	return 0;
}