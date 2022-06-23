#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int i, n, x=0;
    cin>>n;
    char cad[n][3];
    for(i=0;i<n;i++)
    {
        scanf("%s",cad[i]);
        if(cad[i][1]=='+')
            x++;
        if(cad[i][1]=='-')
            x--;
    }
    cout<<x<<endl;
    
    return 0;
}