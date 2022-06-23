#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b, c;
    cin>>a>>b>>c;
    int acb, bca, aabb, bccb, acca;
    acb = a + c + b;
    bca = b + c + a;
    aabb = a + a + b + b;
    bccb = b + c + c + b;
    acca = a + c + c + a;
    cout<<min(acb,min(bca,min(aabb,min(bccb,acca))))<<endl;
}