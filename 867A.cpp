#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n,i,s=0,f=0;
    
    cin>>n;
    char arr[n];
    scanf("%s",&arr);
    
    for(i=1;i<n;i++)
    {
        if(arr[i]=='S' && arr[i-1]=='F')
            f++;
        if(arr[i]=='F' && arr[i-1]=='S')
            s++;
    }
    if(s>f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;
}