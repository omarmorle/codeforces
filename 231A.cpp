#include <string.h>
#include <bits/stdc++.h>
using namespace std;

const int maxn=2e5+5;
int cut[maxn];

int main(void) 
{

    int i, n, sum[3], aux, a=0;
    cin>>n;
    while(n--)
    {
        cin>>sum[0]>>sum[1]>>sum[2];
        aux=sum[0]+sum[1]+sum[2];
        if(aux>1)
            a++;
    }
    cout<<a<<endl;

    return 0;
}