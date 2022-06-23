#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define pii pair<int,int>

int n,acc1,acc2,t;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        acc1+=t;
    }
    for(int i=0;i<n;i++)
    {
        cin>>t;
        acc2+=t;
    }
    cout<<((acc2>acc1)?"No":"Yes");
    return 0;
}