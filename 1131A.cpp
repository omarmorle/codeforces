#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int w1, w2, h1, h2, res;

    cin>>w1>>h1>>w2>>h2;

    res = w1 + w2 + 2 * (h1 + h2) + 4 + abs(w1-w2);

    cout<<res<<endl;

    return 0;
}