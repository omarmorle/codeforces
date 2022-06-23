#include<bits/stdc++.h>
#include <ctype.h>
using namespace std;
 
int main(void)
{
    int n, i;
    char cad[101], cad1[101];
    scanf("%s",cad);
    scanf("%s",cad1);
    n=strlen(cad);
    char f1, f2;
    for(i=0;i<n;i++)
    {
        f1=tolower(cad[i]);
        f2=tolower(cad1[i]);
        if(f1<f2)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        if(f1>f2)
        {
            cout<<"1"<<endl;
            return 0;
        }
    }
    cout<<"0"<<endl;
    return 0;
}