# include <bits/stdc++.h>
using namespace std;
 
int n,x,y,k,sm;
int a[500009];
int c[500009];
 
void solve()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	cin>>a[i],c[a[i]]++;
	
	for(int i=1;i<=k;i++)
	{
		sm=sm+2*(c[i]/2);
		y+=(c[i]%2);
	}
	cout<<sm+(y+1)/2;
}
 
int main(void)
{
	int t=1;
	while(t--)
	solve();
}