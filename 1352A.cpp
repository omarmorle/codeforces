#include<bits/stdc++.h>
#include <map>
#include <math.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n, i, j, k,h, sum, flag;
        char numero[6];
        scanf("%s",&numero);
        j=strlen(numero)-1;
        h=0;
        for(i=0;i<strlen(numero);i++)
        {
            if(numero[i]!='0')
                h++;
        }
        printf("%i\n",h);
        for(i=0;i<strlen(numero);i++,j--)
        {
            if(numero[i]!='0')
            {
                if(h>strlen(numero))
                    continue;
                printf("%c",numero[i]);
                for(k=0;k<j;k++)
                {
                    printf("0");
                }
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}