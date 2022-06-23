#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    char cad[200];
    int tam, i, x;
    cin>>cad;
    tam=strlen(cad);
    for(i=0;i<tam;i++)
    {
        if(cad[i]=='.')
            x=0;
        else if(cad[i]=='-'&&cad[i+1]=='.')
        {
            x=1;
            i++;
        }
        else if(cad[i]=='-'&&cad[i+1]=='-')
        {
            x=2;
            i++;
        }
        
        cout<<x;
    }
    return 0;
}