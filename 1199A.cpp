#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n,x,y;
    cin>>n>>x>>y;
    vector <int> vect(n);
    for(int i=0;i<n;i++)
        cin>>vect[i];
    int d=0;
    for(int i=0;i<n;i++)
    {
        int num =0;
        for(int j= i-x;j <=i+y and j<n;j++)
        {
            if(j<0)
            {
                continue;
            }
            if(vect[j] <vect[i])
            {
                num =1;
                break ;
            }
        }
        if(num==0)
        {
            d=i;
            break;
        }
        
            
    }
    cout<<d+1<<endl;
}