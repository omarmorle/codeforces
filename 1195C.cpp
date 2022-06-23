#include <bits/stdc++.h>
using namespace std;
long long int A[100005],B[100005],dp[100005][1],i,n;
 
int main(void)
{
	
	scanf("%lld",&n);
	
	for(i=1;i<=n;i++)
	    scanf("%lld",&A[i] );	
		
	for(i=1;i<=n;i++)
	    scanf("%lld",&B[i] );	
		
    for(i=0;i<n;i++)
    {
        dp[i+1][1]= max(dp[i][1],dp[i][0]+A[i+1] );	
        dp[i+1][0]= max(dp[i][0],dp[i][1]+B[i+1] );	
    }
    	
    printf("%lld",max(dp[n][0],dp[n][1]) );	
	
	return 0;
}