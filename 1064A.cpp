#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int l[3], aux=1000;
    cin>>l[0]>>l[1]>>l[2];
    sort(l,l+3);
    if(l[2]>=l[0]+l[1])
        aux=min(l[2]-(l[0]+l[1])+1,aux);
    else
        aux=0;
    
    cout<<aux;

    return 0;
}