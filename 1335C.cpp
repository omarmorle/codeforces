#include<bits/stdc++.h>
#include <map>
using namespace std;
 
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
    	int n, i, j, aux;
    	map<int,int> contador;
    	cin>>n;
    	int arr[n];
    	for(i=0;i<n;i++)
    	{
    	    cin>>arr[i];
    	    contador[arr[i]]++;
    	}
    	sort(arr, arr+n);
    	int currentMax = 0;
        int arg_max = 0;
        for(auto it = contador.cbegin(); it != contador.cend(); ++it )
        {
            if (it ->second > currentMax) 
            {
                arg_max = it->first;
                currentMax = it->second;
            }
        }
        //cout << "Valor " << arg_max << " aparece " << currentMax << " times " << endl;
        
        if(currentMax>contador.size())
        {
			cout<<contador.size()<<endl;
		} 
		else
		{
			if(currentMax==contador.size())
			{
				cout<<currentMax-1<<endl;
			} 
			else
			{
				cout<<currentMax<<endl;
			}
		}
        
    }
    
    return 0;
}