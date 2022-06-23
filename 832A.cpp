#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n, k, c;
    cin>>n>>k;
    c=n/k;
    puts((n / k) & 1 ? "YES" : "NO");

    return 0;
}