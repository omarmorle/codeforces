#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
int a[maxn],t,n;
bool cmp(int a,int b)
{
	return a<b;
}
int main(void)
{
	cin>>t;
	for (int k=1;k<=t;k++){
		memset(a,0,sizeof(a));
		cin>>n;
		for (int i=1;i<=n;i++) scanf("%d",&a[i]);
		int ans=0;
		sort(a+1,a+n+1,cmp);
		for (int i=1;i<=n-1;i++){
			ans=max(ans,min(i-1,a[i]-1));
		}
		cout<<ans<<endl;
	}
}