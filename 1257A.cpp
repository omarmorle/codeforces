#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    long long i, j, k, n, m, x, a, b, c, t;

    cin>>t;

    while(t--)
    {
        cin>>n>>x>>a>>b;
        if(a>b)
        {
            c=a; a=b; b=c;
        }
        m=x;
        for(i=0;i<x;i++)
        {
            if(a==1)
                break;
            a--;
            m--;
        }
        if(m>0)
        {
            for(i=0;i<m;i++)
            {
                if(b==n)
                    break;
                b++;
            }
        }
        cout<<abs(a-b)<<endl;
    }

    
    return 0;
}