#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a[] = {-5,0,0,-2};
	int n = sizeof(a)/sizeof(a[0]);
	int _0s=0, negs=0, max_neg = INT_MIN, product = 1;
	for(int i=0; i<n; i++)
	{
		if(a[i] == 0)
		{
			_0s++;
			continue;
		}
		if(a[i] < 0)
		{
			negs++;
			max_neg = max(max_neg, a[i]);
		}
		product = product * a[i];
		
	}
	if(_0s == n)	cout<<0;
	else if(negs%2)
	{
		if(negs == 1 && _0s > 0 && _0s + negs == n)
			cout<<0;
		else
			cout<<product/max_neg;
	}
	else
		cout<<product;
	return 0;
}