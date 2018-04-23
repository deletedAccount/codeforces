//http://codeforces.com/contest/598/problem/E
//E. Chocolate Bar

#include<bits/stdc++.h>

using namespace std;

const int MAXN = 50;
const int inf = 10000;
int dp[MAXN][MAXN][MAXN];

void init ()
{
	for (int j = 0; j < MAXN; j++)
		for (int k = 0; k < MAXN; k++)
			for (int p = 0; p < MAXN; p++)
				dp[j][k][p] = -1;
}

int chopping (int m, int n, int k)
{
	if (m*n == k || k ==0 || m == 0 || n == 0)
		return 0;
	if (m*n < k || k < 0)
		return inf;
	if (n < m)
		swap(m,n);
	if (dp[m][n][k] == -1)
	{
		dp[m][n][k] = inf;
		for (int i = 1; i < m/2+1; i ++)
		{
			for (int j = 0; j <= k; j++)
			{
				dp[m][n][k] = min(dp[m][n][k], n*n + chopping(i,n,j) + chopping(m-i, n, k-j));
			}
		}
		if (m != n) {
			for (int i = 1; i < n/2+1; i ++)
			{
			
				for (int j = 0; j <= k; j++)
				{
					dp[m][n][k] = min(dp[m][n][k], m*m + chopping(i, m, j) + chopping(n-i, m, k-j));
				}
			}
		}
	}
	return dp[m][n][k];
}

int main()
{
	init();
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int m, n, k;
		cin >> m >> n >> k;
		cout << chopping(m, n, k) << endl;
	}	
}
