#include <bits/stdc++.h>
using namespace std;
 
int main () 
{
	int i, n, k, x;
	cin>>n;
	char cad[n];
	cin>>cad;
    for(i=k=x=0;i<n;i++)
    {
        if(cad[i]=='x')
        {
	        k++;
	        if(k>=3)
                x++;
        }
        if(cad[i]!='x')
            k=0;
	}
	cout<<x<<endl;
	return 0;
}