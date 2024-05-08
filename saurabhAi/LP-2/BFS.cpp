#include<iostream>
#include<vector>
#include <queue> 
# define  N 10
using namespace std;
class bfs
{
public:
	 vector<int> adj[N];
	 bool vis[N];
	 int n, m;// vertex and edge
	 int x, y;//get eges


	bfs()
	{
		

	}
	void get()
	{
		cout << "Enter";

		for (int i = 0; i < N; i++)
		{
			vis[i] = 0;



		}
	}
	void creation()// for the input taken from the user  and actual logic for the bfs
	{
		cout << "\n enter the no of vertices and edges";
		cin >> n >> m;

		for (int i = 0; i < m; i++)
		{
			cout << "\n Enter the eges";
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);

		}
		queue<int> q;
		q.push(1);
		vis[1] = true;
		while (!q.empty())
		{
			int node = q.front();
			q.pop();
			cout << "\n" << node << endl;

			vector<int >::iterator it;

			for (it = adj[node].begin(); it < adj[node].end(); it++)// explore the node of the visited vertex
			{
				if (!vis[*it])
				{
					vis[*it] = 1;
					q.push(*it);
				}
			}




		}
	}



};
int main()
{
	bfs b ;
	b.get();
	b.creation();
	
	

}