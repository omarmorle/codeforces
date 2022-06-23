#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n, i, x=0, min, max;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>0)
        {
            if(arr[i]>max)
            {
                x++;
                max=arr[i];
            }
            if(arr[i]<min)
            {
                x++;
                min=arr[i];
            }
        }
        else
        {
            min = arr[i];
            max = arr[i];
        }
    }
    cout<<x<<endl;
    return 0;
}