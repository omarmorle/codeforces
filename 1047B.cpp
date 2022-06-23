#include <bits/stdc++.h>
using namespace std;
 
int main (void)
{
    long long n,pos,a,b,ans;

    while(scanf ("%lld",&n) != EOF)
    {
        ans = 0;

        for(pos=1; pos<=n; pos++)
        {
            scanf("%lld %lld",&a,&b);
            ans = max (ans,a+b);
        }

        printf("%lld\n",ans);
    }

    return 0;
}