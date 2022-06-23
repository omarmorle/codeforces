#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b, i=0;
    
    cin>>a>>b;
    while(1)
    {
        i+=1;
        a = a * 3;
        b = b * 2;
        if(a>b)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}