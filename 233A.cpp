#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n, i;
    cin>>n;
    if (n%2!=0)
    {
        cout<<"-1"<< endl;
    }
    else
    {
        cout<<"2 1";
        for (i=3;i<n;i+=2)
            cout<<" "<<i+1<<" "<<i;
    }
    return 0;
}