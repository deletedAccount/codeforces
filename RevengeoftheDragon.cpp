//K. Revenge of the Dragon
//http://codeforces.com/problemset/gymProblem/101149/K

#include<bits/stdc++.h>
using namespace std;

#define CONSTANT 0.916297857297023

int main()
{
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	//double dist = pow(x1 - x2, 2) + pow(y1 + y2, 2);// still dont know why this is wrong :|
	double ans = (1.0 * (x1 - x2) * (x1 - x2) + 1.0 * (y1 - y2) * (y1 - y2));
        printf("%.10f\n", ans * CONSTANT);
}


