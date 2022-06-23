#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n, res;
    cin>>n;
    n++;
    if(n%2==0)
        res=n/2;
    else
        res=n;
    if(n<=1)
        res=0;    
    
    cout<<res<<endl;

    return 0;
}