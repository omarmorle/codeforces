#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define endl "\n"
using namespace std;
const ll mod=1e9+7;
const int N=5+1e5;
const int INF=1e9;
int a[N];
bool f[N];
int main()
{
#ifdef LOCAL
    freopen("input.in", "r", stdin);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    ll s=0;
    float x;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>x;
        int y=x;
        float z=y;
        if(x==z)
                f[i]=1;
        a[i]=floor(x);
        s+=a[i];
    }
    int i=0;
    if(s<0)
        s*=-1;
    while(s)
    {
        if(!f[i])
        {
            ++a[i];
            f[i]=0;
            --s;
        }
    ++i;
    }
    for(int i=0;i<n;++i)
        cout<<a[i]<<"\n";
}