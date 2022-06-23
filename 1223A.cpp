#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int q;
    cin>> q;
    int n;
    for (int i=0;i<q ; i++)
    {
        cin >>n ;
        if (n==2)
            cout << 2<<'\n';
        else if (n%2==0)
            cout << 0<<'\n';
        else
            cout << 1 << '\n';
 
    }
    return 0;
}