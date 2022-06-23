#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    char cad1[100], aux;
    int n, i, j, x=0;
    scanf("%s",&cad1);
    n = strlen(cad1);
    char cad2[n];
    for(i=0;i<n;i++)
    {
        if(cad1[i]<97)
            x++;
    }
    if(x>n/2)
    {
        for(i=0;i<n;i++)
        {
            if(cad1[i]>=97)
            {
                aux = cad1[i]-32;
                cad1[i]=aux;
            }
            cout<<cad1[i];
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(cad1[i]<97)
            {
                aux = cad1[i]+32;
                cad1[i]=aux;
            }
            cout<<cad1[i];
        }
    }
}