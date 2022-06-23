#include <bits/stdc++.h>
#include <string.h>
using namespace std;
 
int main (void)
{
    int n, i;
    scanf("%d ", &n);
    char arr[n];
    int conta = 0, conta1 = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%c", &arr[i]);
        if (arr[i] == '1')
            conta1++;
        else
            conta++;
    }
    if (conta != conta1)
    {
        cout<<"1"<<endl;
        for (i = 0; i < n; i++)
            cout<<arr[i];
    }
    else
    {
        cout<<"2"<<endl;;
        for (i = 0; i < n; i++)
        {
            if (i == n-1)
                cout<<" ";
            cout<<arr[i];
        }
    }
}