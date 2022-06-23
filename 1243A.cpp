#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    long long i, j, n, t, aux, x;
    int arr[1000];
    
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        
        for(i=n;i>0;i--)
        {
            aux=0; x=0;
            for(j=0;j<n;j++)
            {
                //cout<<arr[j]<<" ";
                if(arr[j]>=i)
                {
                    aux=aux+1;
                    //cout<<arr[j]<<" "<<i<<" "<<aux<<endl;
                }
            }
            //cout<<aux<<" "<<i<<endl;
            //cout<<i<<endl;
            if(aux>=i)
                break;
        }
        cout<<i<<endl;
    }

    
    return 0;
}