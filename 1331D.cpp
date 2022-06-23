#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char cad[7];
    scanf("%s",&cad);
    if(cad[6]=='1'||cad[6]=='3'||cad[6]=='5'||cad[6]=='7'||cad[6]=='9'||cad[6]=='B'||cad[6]=='D'||cad[6]=='F')
        printf("1\n");
    else
        printf("0\n");
    return 0;
}