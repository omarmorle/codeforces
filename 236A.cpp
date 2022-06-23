#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n, i, x=0, min, max, tam;
    char let[100];
    scanf("%s",&let);
    tam=strlen(let);
    sort(let, let+tam);
    //printf("%s\n",&let);
    for(i=1;i<tam;i++)
    {
        if(let[i]==let[i-1])
            x++;
    }
    if((tam-x)%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    
    return 0;
}