#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n, a;
    scanf("%i",&n);
    while(n--)
    {
        a=0;
        int conta=0, j=0;
        char array[100], arr[100];
        scanf("%s",&array);
        int lon = strlen(array);
        for(int i=0;i<lon;i++)
        {
            if(i>0)
            {
                if(array[i]=='0'&&array[i-1]=='1')
                {
                    a=1;
                    //cout<<i;
                }
                if(a==1&&array[i]=='0')
                {
                    //cout<<"Y";
                    arr[j]=array[i];
                    j++;
                    conta++;
                }
                if(i<lon-2)
                {
                    if(array[i]=='0'&&array[i+1]=='1')
                    {
                        //cout<<"N";
                        int auxlon = strlen(arr);
                        //conta += auxlon;
                        a=0;
                    }
                }
            }
        }
        if(a==1)
            {
                int cont0=0;
                int k=lon-1;
                //cout<<k<<endl;
                for(int p=k;p>-1;p--)
                {
                    //cout<<p;
                    if(array[p]=='0')
                        cont0++;
                    if(array[p]=='1')
                        break;
                }
                conta=conta-cont0;
            }
        printf("%i\n",conta);
    }
    
    return 0;
}