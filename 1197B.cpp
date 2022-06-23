#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
int a[maxn];
int main(void)
{
	int n,pos,maxx=-1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-2;i++)
	{
		if(a[i]>a[i+1]&&a[i+1]<a[i+2])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
}