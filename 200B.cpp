#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n, i;
    double sum, aux;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>aux;
        sum=sum+aux;
    }
    cout<<sum/n<<endl;
    return 0;
}