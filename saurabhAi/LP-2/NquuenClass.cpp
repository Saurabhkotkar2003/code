#include<iostream>
#include<cstdlib>
using namespace std;
class Q
{
public:
	int x[20];
	int place(int r,int c)
	{
		for (int i = 1; i <= r - 1; i++)
		{
			if (x[i] == c)
			{
				return 0;
			}
			else
			{
				if (abs(x[i] - c) == abs(i - r))
				{
					return 0;
				}
			}
		}
		return 1;
	}
	int print(int n)
	{
		cout << "\n"<<endl;
		for (int i = 1; i <= n; i++)
		{
			cout << "\t" << i;

		}
		for (int i = 1; i <= n; i++)
		{
			cout << "\n" << i;
			for (int j = 1; j <= n; j++)
			{
				if (x[i] == j)
				{
					cout << "\tQ";
				}
				else
				{
					cout << "\t-";
				}
			}
		}
		return 0;

	}
	int Nqueen(int r, int n)
	{
		for (int c = 1; c <= n; c++)
		{
			x[r] = c;
			if (place(r, c))
			{
				if (r==n)
				{
					print(n);
				}
				else
				{
					Nqueen(r + 1, n);

				}
			}
		}
		return 0;

	}
};
int main()
{
	Q q;
	cout << q.Nqueen(1, 4);
}


