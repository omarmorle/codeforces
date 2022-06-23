#include<bits/stdc++.h>
using namespace std;

int main()
{
    char cad[100];
    int tam, signo=1;
    long long res=0,acarreo=0;
    scanf("%s",cad);
    tam=strlen(cad);
    for(int i=0;i<tam;i++)
    {
        if(cad[i]=='-'||cad[i]=='+')
        {
            //cout<<acarreo<<endl;
            res+=signo*acarreo;
            acarreo=0;
        }
        if(cad[i]=='-')
            signo=-1;
        if(cad[i]=='+')
            signo=1;
        //cout<<acarreo<<endl;
        acarreo=acarreo*10+cad[i]-'0';
        //cout<<acarreo<<" "<<signo<<endl;
    }
    res+=signo*acarreo;
    printf("%lld",res);
    return 0;
}