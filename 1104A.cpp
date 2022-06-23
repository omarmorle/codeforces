#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
 
int main(void)
{
    int n, i, j, x;
    cin>>n;
    if(n==1)
    {
        cout<<n<<endl;
        cout<<n<<endl;
        return 0;
    }
    for(i=9;i>1;i--)
    {
        if(n%i==0)
        {
            x=n/i;
            cout<<x<<endl;
            for(j=0;j<x;j++)
                cout<<i<<" ";
            return 0;
        }
    }
    cout<<n<<endl;
    for(i=0;i<n;i++)
    {
        cout<<1<<" ";
    }
    
    return 0;
}