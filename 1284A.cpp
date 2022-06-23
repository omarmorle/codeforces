#include <bits/stdc++.h>
using namespace std;
 
int main () 
{
	int n, m, k;
	string s[22], t[22], res[22*22];
	int q, y;
	cin>>n>>m;
	for(int i = 0; i < n; i++) 
		cin>>s[i];
	for(int i = 0; i < m; i++)
		cin>>t[i];
 
	k = n * m / __gcd(n, m);
	for (int i = 0; i < k; i++)
		res[i] = s[i % n] + t[i % m];
 
	cin >> q;
	while (q--) 
	{
		cin >> y;
		cout << res[(y - 1) % k] << endl;
	}
 
	return 0;
}