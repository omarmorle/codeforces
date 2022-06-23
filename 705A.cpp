#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			cout<<"I love ";
		else
			cout<<"I hate ";
		if(i!=n)
			cout<<"that ";
	}
	cout<<"it";
}