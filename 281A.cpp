#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    char cad[1000];
    scanf("%s",&cad);
    if(cad[0]>=97)
        cad[0]=cad[0]-32;
    cout<<cad<<endl;
    return 0;
}