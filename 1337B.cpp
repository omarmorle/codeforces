#include<bits/stdc++.h>
#include <map>
using namespace std;
 
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int i, x, n, m, aux;
        cin>>x>>n>>m;
        
        while(x>20 && n>0)
        {
            x=x/2+10;
            n--;
        }
        while(m>0 && x>0)
        {
            x-=10;
            m--;
        }
        if(x>0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        
    }
    
    return 0;
}