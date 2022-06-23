#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    if(n%4==1)
        cout<<"0 A"<<endl;
    if(n%4==3)
        cout<<"2 A"<<endl;
    if(n%4==2)
        cout<<"1 B"<<endl;
    if(n%4==0)
        cout<<"1 A"<<endl;
    
    return 0;
}