#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,a,b;
    string name;
    cin >> n;
    bool flag=false;
    
    for(int i=0;i<n;i++)
    {
        cin >> name;
        cin >> a>> b;
        if(a>=2400 && b>a)
            flag=true;
    }
    
    if(flag==true)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}