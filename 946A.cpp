#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n, i, x;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0, x=0;i<n;i++)
    {
        if(arr[i]<0)
            arr[i]=arr[i]*-1;
        x=x+arr[i];
    }
    cout<<x<<endl;
    

    return 0;
}