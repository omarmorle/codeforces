#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,n=0;
    char s[20];
    scanf("%s",s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            n++;
        }
    }
    if(n==4||n==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}