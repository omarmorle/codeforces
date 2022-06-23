#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    long long i, a, n, enes=0, zetas=0;
    cin>>n;
    char arr[n];
    scanf("%s",&arr);
    sort(arr, arr+n);
    for(i=0;i<n;i++)
    {
        if(arr[i]=='n')
            enes+=1;
        if(arr[i]=='z')
            zetas+=1;
    }
    for(i=0;i<enes;i++)
        cout<<"1 ";
    for(i=0;i<zetas;i++)
        cout<<"0 ";
    //cout<<arr;
   
    return 0;
}