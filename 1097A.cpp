#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int i=5;
    string s, x;
    cin>>s;

    while(i--)
    {
        cin>>x;
        if(x[0]==s[0] || x[1]==s[1])
        {
            cout<<"YES\n";
            return 0;
        }
    }

    cout<<"NO";
    return 0;
}