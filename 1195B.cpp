#include <bits/stdc++.h>
using namespace std;

int main (void) 
{
    int n, k;
    cin >> n >> k;
    long long a = floor(sqrt(k * 2));
    long long b = a * (a + 1) / 2;
    while (b - n + a != k) 
    {
        a++;
        b = a * (a + 1) / 2;
    }
    cout << n - a << endl;
 
}