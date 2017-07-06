//C. The Smallest String Concatenation
//http://codeforces.com/contest/632/problem/C

#include<bits/stdc++.h>
using namespace std;

bool compare (const string &str, const string &str2)
{
	return (str2 + str) > (str + str2);
}

int main()
{
	int n;
	cin >> n;
	vector<string> strings;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		strings.push_back(str);
	}
	sort(strings.begin(), strings.end(), compare);
	for ( int i = 0; i < n; i++)
		cout << strings[i];
	cout << endl;
}
