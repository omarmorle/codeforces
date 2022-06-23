#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    long long n, i, tam;
    char un[101], dos[101];
    scanf("%s",&un);
    scanf("%s",&dos);
    tam=strlen(un);
    for(i=0;i<tam;i++)
    {
        if(un[i]!=dos[i])
            cout<<"1";
        else
            cout<<"0";
    }
    
    
    return 0;
}