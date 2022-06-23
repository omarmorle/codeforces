#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
 
int main(void)
{
    int n,x=0;
    char cad[20];
    char un[]="Tetrahedron", ds[]="Cube", tr[]="Octahedron", cu[]="Dodecahedron", cc[]="Icosahedron";
    
    cin>>n;
    while(n--)
    {
        scanf("%s",&cad);
        if(strcmp(cad,un)==0)
            x+=4;
        if(strcmp(cad,ds)==0)
            x+=6;
        if(strcmp(cad,tr)==0)
            x+=8;
        if(strcmp(cad,cu)==0)
            x+=12;
        if(strcmp(cad,cc)==0)
            x+=20;
    }
    cout<<x<<endl;
    return 0;
}