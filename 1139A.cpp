#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    string s;
    int cnt=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
        if((s[i]-'0')%2==0)
            cnt+=(i+1);
    cout<<cnt;
}