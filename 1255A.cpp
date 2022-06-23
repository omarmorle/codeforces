#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    long long i, j, k, n, m, t, a, b;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        k = abs(a - b);

        long long cnt = 0;

        m = k / 5;
        k -= (5 * m);
        cnt += m;

        m = k / 2;
        k -= (2 * m);
        cnt += m;

        cnt += k;

        cout<<cnt<<endl;
    }

    
    return 0;
}