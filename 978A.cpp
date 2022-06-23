#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, ck=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
                arr[i]=0;
        }
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]>0) 
            ck++;
    }
    cout<<ck<<endl;
    for(i=0; i<n; i++)
    {
        if(arr[i]>0)
            cout<<arr[i]<<" ";
    }
}