/**
 * Given a value V, if we want to make a change for V Rs, and we have an infinite supply of each of the denominations in Indian currency, 
 * i.e., we have an infinite supply of { 1, 2, 5, 10, 20, 50, 100, 500, 1000} valued coins/notes,
 *  what is the minimum number of coins and/or notes needed to make the change?
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a[] = {1,2,5,10, 20, 50, 100, 500, 1000}, v = 120;
	int n = sizeof(a)/sizeof(a[0]);
	sort(a, a + n);
	vector<int> ans;
	while(v){
		int i;
		for(i=0; i<n;i++)
			if(a[i] > v)
				break;
		ans.push_back(a[i-1]);
		v = v - a[i-1];
	}
	cout<<ans.size()<<endl;
	for(auto X : ans)
		cout<<X<<" "; 
	return 0;
}