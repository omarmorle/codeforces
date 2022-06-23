#include<bits/stdc++.h>
#include <map>
#include <math.h>
using namespace std;

int main()
{
    long long int t, n, i, j, sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=3;
        j=2;
        while(n%sum!=0)
        {
            sum=sum+(1<<j);
            j++;
        }
        printf("%lld\n",n/sum);
    }
    return 0;
}