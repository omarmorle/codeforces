#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n, t, i, j;
    cin>>n>>t;
    char cad[n], aux;
    scanf("%s",&cad);
    //printf("%s",cad);
    for(i=0;i<t;i++)
    {
        for(j=0;j<n;j++)
        {
            if(cad[j]=='B'&&cad[j+1]=='G')
            {
                aux=cad[j];
                cad[j]=cad[j+1];
                cad[j+1]=aux;
                j++;
            }
        }
    }
    printf("%s\n",cad);
    
    return 0;
}