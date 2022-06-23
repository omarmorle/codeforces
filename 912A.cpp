#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n, m, y, g, b;
    cin>>n>>m>>y>>g>>b;
    long long amarillo=y*2;
    long long azul=b*3;
    amarillo = amarillo+g;
    azul = azul+g;
    long long realama, realaz;
    realama = n-amarillo;
    realaz= m-azul;
    long long abc=0;
    if(realama<0)
        abc=abc+realama;
    if(realaz<0)
        abc=abc+realaz;
    if(abc<0)
        abc=abc*-1;
    
    cout<<abc<<endl;
    
    return 0;
}