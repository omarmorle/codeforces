#include<bits/stdc++.h>
#include <ctype.h>
using namespace std;
 
int main(void)
{
    long long s[4];
    int i, n=0;
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    sort(s,s+4);
    for(i=0; i<3; i++)
    {
        if(s[i]==s[i+1])
        {
            n++;
        }
    }
    cout<<n<<endl;
    
    
    return 0;
}