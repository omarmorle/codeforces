#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b, k, x, cont = 0;
    cin >> b >> k;
    b = b & 1;
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        if (b && x & 1)
        {
            cont++;
            x = 0;
        }
    }
    cont += (x & 1);
    if (cont & 1)
        puts("odd");
    else
        puts("even");

    return 0;
}