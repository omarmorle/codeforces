#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,j,k;
    int n,m,cnt;

    cin>>n>>k;

    string s;
    cin>>s;

    sort(s.begin(),s.end());

    cnt=s[0]-'a'+1; k--; j=0;
    for(i=1;i<n;i++)
    {
        if(!k) 
			break;

        if(s[i]-s[j]>=2)
        {
            cnt+=(s[i]-'a'+1);
            k--; j=i;
        }
    }

    if(!k)
        cout<<cnt<<endl;

    else
        cout<<-1<<endl;

    return 0;
}