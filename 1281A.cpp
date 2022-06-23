#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        char cad[10001];
        cin>>cad;
        int m=strlen(cad);
        if(cad[m-1]=='o')
            cout<<"FILIPINO"<<endl;
        if(cad[m-1]=='u')
            cout<<"JAPANESE"<<endl;
        if(cad[m-1]=='a')
            cout<<"KOREAN"<<endl;
    }
    return 0;
}