#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, a, b, x=0;
    cin>>n;
    int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	
	sort(arr, arr+n);
	
	a = arr[n-3]+arr[n-2];
	if(a<=arr[n-1])
	{
	    cout<<"NO"<<endl;
	    return 0;
	}
	else
	    cout<<"YES"<<endl;
	
	cout<<arr[n-1]<<" "<<arr[n-2]<<" ";
	
	b=n-3;
	
	if(b>=0)
	{
	while(b--)
	    cout<<arr[b]<<" ";
	}
	cout<<arr[n-3];
    
    
    return 0;
}