//B. NO Time for Dragons
//http://codeforces.com/problemset/gymProblem/101149/B

#include<bits/stdc++.h>

using namespace std;

struct Dragon {
	long long int a, b;
};

bool compare (const Dragon& drg, const Dragon& drg2)
{
        return (drg.a - drg.b) > (drg2.a - drg2.b);
}	


int main()
{
	long long int n, currentSoldiers = 0, sumOfSoldiers = 0;
	vector<Dragon> dragons;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		dragons.push_back(Dragon{a, b});
	}
	sort(dragons.begin(), dragons.end(), compare);
	for ( int i = 0; i < n; i++)
	{	
		long long int needed = max(dragons[i].a - currentSoldiers , (long long int)0);
		sumOfSoldiers += needed;
		currentSoldiers += (needed - dragons[i].b);
	}
	cout << sumOfSoldiers << endl;
}
