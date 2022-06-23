#include <bits/stdc++.h>
using namespace std;

const int maxn=2e5+5;
int cut[maxn];

int main(void)
{
    int i, j, k;
    int n, m, h;

    cin>>n>>h>>m;

    int l[m], r[m], x[m];
    for(i = 0; i < m; i++)
        cin>>l[i]>>r[i]>>x[i];

    int ans = 0;
    for(i = 1; i <= n; i++)
    {
        int mx = h;
        for(j = 0; j < m; j++)
        {
            if(l[j] <= i && i <= r[j])
                mx = min(mx, x[j]);
        }

        ans += mx * mx;
    }

    cout<<ans<<endl;

    return 0;
}