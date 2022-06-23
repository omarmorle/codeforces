#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n, i, j;
    cin>>n;
    int arr[n+1];
    
    for(i=1;i<=n;i++)
    {
        cin>>j;
        arr[j]=i;
    }
    for(i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    
    return 0;
}