#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n,i,j;
    int izq=0, der=0;
    int arr[] = {0,0,0,0,0,0,0,0,0,0};
    cin>>n;
    char sel[n];
    scanf("%s",sel);
    //cout<<sel<<endl;
    for(j=0;j<n;j++)
    {
        
        if(sel[j]=='L')
        {
            for(i=0;i<10;i++)
            {
                if(arr[i]==0)
                {
                    arr[i]=1;
                    break;
                }
            }
        }
        if(sel[j]=='R')
        {
            i=9;
            while(1)
            {
                if(arr[i]==0)
                {
                    arr[i]=1;
                    break;
                }
                i--;
            }
        }
        if(sel[j]=='0')
            arr[0]=0;
            
        if(sel[j]=='1')
            arr[1]=0;
        
        if(sel[j]=='2')
            arr[2]=0;
        
        if(sel[j]=='3')
            arr[3]=0;
        
        if(sel[j]=='4')
            arr[4]=0;
        
        if(sel[j]=='5')
            arr[5]=0;
        
        if(sel[j]=='6')
            arr[6]=0;
        
        if(sel[j]=='7')
            arr[7]=0;
        
        if(sel[j]=='8')
            arr[8]=0;
        
        if(sel[j]=='9')
            arr[9]=0;
        //cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<arr[5]<<arr[6]<<arr[7]<<arr[8]<<arr[9]<<endl;
    }
    cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<arr[5]<<arr[6]<<arr[7]<<arr[8]<<arr[9];
   
    return 0;
}