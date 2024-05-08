#include<iostream>
#include<vector>
#include<queue>
#define N 10
using namespace std;
vector<int >adj[N];
int x, y, m, n;
bool vis[N];
void init()
{
	for (int i = 0; i < N; i++)
	{
		vis[i] = 0;
	}
}
void create()
{
	cout << "\n Enter the how many vertex and edge are you created";
	cin >> n >> m;
	
	for (int i = 0; i < m; i++)
	{
		cout << "\n Enter the edge";
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);

	}
}
void bfs()
{
	queue<int >q;
	q.push(1);
	vis[1] = 1;
	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		cout << "\t" << node;
		vector<int> ::iterator it;
		for (it = adj[node].begin(); it != adj[node].end();it++)
		{
			if (!vis[*it])
			{
				vis[*it] = 1;
				q.push(*it);
			}

		}
	}
}
void dfs(int node)
{
	vis[node] = 1;
	cout << node<<"\t";
	vector<int>::iterator it;
		for(it = adj[node].begin(); it < adj[node].end(); it++)
		{
			
			if (!vis[*it])
			{
				dfs(*it);
			}

		}
}
int main()
{
	int ch=0;
	cout << "\n Enter\n";
	cout << "1.bfs\n 2.dfs";
	cout << "\n Enter the number";
	cin >> ch;
	
	switch (ch)
	{
	case 1:
		init();
		create();
		bfs();
		break;
	case 2:
		init();
		create();
		dfs(1);
		break;
	default :
		break;
	}

}
