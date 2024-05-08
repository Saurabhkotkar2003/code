#include<iostream>
#include<vector>
#include<stack>
#define N 10
using namespace std;

vector<int> adj[N];
bool vis[N];

void Createdfs(int node) {
	vis[node] = 1;
	cout << node << " \t";
	vector<int>::iterator it;
	for (it = adj[node].begin(); it != adj[node].end(); it++) {
		if (!vis[*it]) { // Corrected the condition by removing semicolon
			Createdfs(*it);
		}
	}
}

int main() {
	int m, n;
	int x, y;
	cout << "Enter the number of edges and number of vertices in the graph or tree (n=vertices and m=edges): ";
	cin >> n >> m;

	for (int i = 0; i < N; i++) {
		vis[i] = 0;
		adj[i].clear(); // Clearing adjacency list
	}

	for (int i = 0; i < m; i++) {
		cout << "Enter edge " << i + 1 << ": ";
		cin >> x >> y;
		adj[x].push_back(y); // Connecting edges to adjacency list
		adj[y].push_back(x); // For undirected graph, add this line
	}

	Createdfs(1);

	return 0;
}
