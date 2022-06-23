#include <bits/stdc++.h>
using namespace std;

int main (void)
{

    int s,v1,v2,t1,t2,a,b;

    while (cin >> s >> v1 >> v2 >> t1 >> t2)
    {
        a = 2*t1 + s*v1;
        b = 2*t2 + s*v2;

        if (a < b)
            cout<<"First"<<endl;
        else if (a > b)
            cout<<"Second"<<endl;
        else
            cout<<"Friendship"<<endl;
    }

    return 0;
}