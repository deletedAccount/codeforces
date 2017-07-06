//D. Green and Black Tea
//http://codeforces.com/problemset/problem/746/D

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, green, black;
	cin >> n >> k >> green >> black;
	bool greenTurn = green > black;
	string ans;
	for ( int i = 0; i < n;)
	{
		if (greenTurn){
			if (green == 0){
				ans = "NO";
				break;
			}
			int end = max(1, (min(green - black, k)));
			for ( int j = 0; j < end ; j++, i++, green --)
				ans += 'G';
			greenTurn = false; 
		}else {
			if (black == 0){
				ans = "NO";
				break;
			}
			int end = max(1, (min(black - green, k)));
			for ( int j = 0; j < end; j++, i++ , black --)
				ans += 'B';
			greenTurn = true; 
		}
	}
	cout << ans << endl;
}
