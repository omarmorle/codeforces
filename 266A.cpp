#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n, x=0, i;
    cin>>n;
    char cad[n];
    scanf("%s",cad);
    for(i=0; i<n-1; i++)
    {
        if(cad[i]==cad[i+1])
            x++;
    }
    cout<<x<<endl;
    
    return 0;
}