//http://codeforces.com/contest/534/problem/B
//B. Covered Path

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int v1, v2, t, d;
	cin >> v1 >> v2 >> t >> d;
	bool from_last = false;
	int sum = 0;
	for ( int i = 0; i < t; i++){
		if (i == 0)
			sum = v1;
		else
		{
			if (!from_last && v1 + i * d < v2 + (t - (i+1)) * d)
				sum += v1 + i * d;
			else if (from_last)
				sum += v2 + (t - (i+1)) * d;
			else{
				from_last = true;
				sum += v2 + (t - (i+1)) * d;
			}
		}
	}
	cout << sum << endl;
}
