#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int m,n,z,i,j,count;

    while (cin >> m >> n >> z)
    {
        count = 0;

        for (i=m; i<=z; i+=m)
            for (j=n; j<=i; j+=n)
                if (i == j)
                    count = count + 1;

        cout << count << endl;
    }
    return 0;
}