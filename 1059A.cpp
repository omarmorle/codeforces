#include <bits/stdc++.h>
using namespace std;
struct nodo
{    
    int t,l;
}p[1000100];

int main(void)
{    
    int n,L,a;    
    cin>>n>>L>>a;    
    for(int i=0;i<n;i++)    
        cin>>p[i].t>>p[i].l;   
    int ans=0;    
    ans+=p[0].t/a;    
    for(int i=0;i<n-1;i++)    
    {        
        if(p[i].t+p[i].l<p[i+1].t)        
        ans+=(p[i+1].t-p[i].l-p[i].t)/a;    
        
    }    
    if(n!=0)    
        ans+=(L-p[n-1].t-p[n-1].l)/a;    
    else    
    ans+=L/a;    
    
    cout<<ans;  

}