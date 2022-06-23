#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n[4],a;
    
    for(a=0;a<4;a++)
        cin>>n[a];
    sort(n, n + 4);
    for(a=0;a<3;a++)
        cout<<n[3]-n[a]<<" ";
    
    return 0;
}