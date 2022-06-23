#include<bits/stdc++.h>
#include <map>
#include <math.h>
using namespace std;

int main()
{
    int t, n, i, j, sumap, sumat;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if((n/2)%2!=0)
        {
            printf("NO\n");
        }else{
            printf("YES\n");
            sumap=sumat=0;
            for(i=0;i<n/2;i++){
                cout<<(i+1)*2<<" ";
                sumap+=(i+1)*2;
            }
            for(i=0;i<n/2-1;i++)
            {
                cout<<i*2+1<<" ";
                sumat+=i*2+1;
            }
            cout<<sumap-sumat<<endl;
            //printf("\n");
        }
    }
    return 0;
}