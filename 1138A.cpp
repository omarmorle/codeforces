#include<bits/stdc++.h>
using namespace std;

int n,x,sum,ans,pre,lst, i;
 
int main(void)
{
    
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>x;
		if (lst==x) sum++;
		else pre=sum,sum=1;
		lst=x,ans=std::max(ans,std::min(pre,sum));
	}
	cout<<ans*2<<endl;
}