#include <bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n, i, x=0, z;
    
    cin>>n;
    z=n/2;
	
    for(i=1;i<=z;i++)
    {
		if(n%i == 0)
		{
			x++;
		}
    }
    cout<<x<<endl;
    
    return 0;
}