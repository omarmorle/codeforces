#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n, i, x;
    cin>>n;
    char arr[n];
    scanf("%s",&arr);
    for(i=0, x=0;i<n;i++)
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='y')
        {
            if(x==0)
            {
                cout<<arr[i];
                x++;
            }
        }
        else
        {
            cout<<arr[i];
            x=0;
        }
    }
    

    return 0;
}