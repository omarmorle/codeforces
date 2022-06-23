#include<bits/stdc++.h>
using namespace std;
int main (void)
{
	int a, b, c, b1, c1;
	cin>>a>>b>>c;
	b1 = b/2;
	c1 = c/4;
	
	cout<<7*min(a,min(b1,c1))<<endl;
	
	return 0;
}