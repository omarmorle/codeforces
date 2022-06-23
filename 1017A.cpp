#include <string.h>
#include <bits/stdc++.h>
using namespace std;

const int maxn=2e5+5;
int cut[maxn];

int main(void) 
{

    int i, n, cal[4], aux, a=0;
    cin>>n;
    int sum[n];
    for(i=0; i<n; i++)
    {
        cin>>cal[0]>>cal[1]>>cal[2]>>cal[3];
        sum[i] =  cal[0] + cal[1] + cal[2] + cal[3];
        if(i==0)
            aux = sum[i];
    }
    sort(sum, sum+n);
    while(1)
    {
        n--;
        a++;
        if(sum[n]==aux)
        {
            cout<<a<<endl;
            return 0;
        }
    }

    return 0;
}