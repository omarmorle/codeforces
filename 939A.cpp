#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int i,n,move, mover;
    cin>>n;
    int arr[n+1];
    for(i=1;i<=n;i++)
        cin>>arr[i];
    for(i=1;i<=n;i++)
    {
        move = arr[i];
        mover = arr[move];
        if(arr[mover]==i)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}