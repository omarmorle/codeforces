#include <string.h>
#include <bits/stdc++.h>
using namespace std;

const int maxn=2e5+5;
int cut[maxn];

int main(void)
{
    int i, n, k;
    char palabra[100];
    cin>>n;
    while(n--)
    {
        cin>>palabra;
        k=strlen(palabra);
        if(k>10)
            cout<<palabra[0]<<k-2<<palabra[k-1]<<endl;
        else
            cout<<palabra<<endl;
    }

    return 0;
}