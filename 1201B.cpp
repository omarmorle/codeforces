#include <iostream>
using namespace std;
 
int main() 
{
	long long n; cin >> n;
	long long a[n] , mx = 0 , sum = 0;
	for(int i = 0 ;i < n ; i++)
		cin >> a[i] , sum+=a[i] , mx = max(mx , a[i]);
	cout << ((sum%2==0 && mx<=sum/2)?"YES":"NO");
}