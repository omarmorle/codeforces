#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long T;
    cin>>T;
    while(T--)
    {
	    long long n,s,t;
	    cin>>n>>s>>t;
	    cout<<n-min(s,t)+1<<endl;
    }
    return 0;
}