//K. Two Pirates
//http://codeforces.com/gym/100488/problem/K

#include<bits/stdc++.h>
using namespace std;

int main()
{	
	long long int dumSum = 0, sum = 0;
	priority_queue<int, vector<int>, greater<int> > min_heap;
	int n;
	cin >> n;
	for (int i = 0; i < n/2; i++){
		int num1 , num2;
		cin >> num1 >> num2;
		min_heap.push(num1);
		min_heap.push(num2);
		dumSum += min_heap.top();
		min_heap.pop();
	}
	if (n % 2 == 1)
		cin >> sum;
	while(min_heap.size() != 0){
		sum += min_heap.top();
		min_heap.pop();
	}
	cout << sum << " " << dumSum << endl;

}

