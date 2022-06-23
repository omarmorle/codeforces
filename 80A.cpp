#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int primos[] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
    int n, m, i;
    cin>>n>>m;
    for(i=0;i<18;i++)
    {
        if(n==primos[i])
        {
            if(m==primos[i+1])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}