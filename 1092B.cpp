#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n, i, j=0, aux=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=1;i<n;i+=2)
    {
        aux=(arr[i]-arr[i-1]);
        j=j+aux;
    }
    cout<<j<<endl;
    return 0;
}