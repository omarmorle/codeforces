#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int test;
	cin >> test;
	while(test--)
	{
	    int n,x;
	    cin >> n >> x;
	    bool arr[201]={};
	    for(int i=0 ; i<n ; i++)
	    {
	        int num;
	        cin >> num;
	        arr[num-1]=1;
	    }
	    int i;
	    bool flag=1;
	    for(i=0 ; ; i++)
	    {
	        if(arr[i]==0 && x>0)
	        {
	            x--;
	        }
	        else if(arr[i]==0 && x==0)
	        {
	            cout << i << endl;
	            break;
	        }
	    }
	}
	return 0;
}