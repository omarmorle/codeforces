#include <math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[4];
	int n, i=0, j=0;
	int l, contador;
	int ac=0;
	int n1,n2,n3,n4;
	int uno, dos, tres, cuatro;
	
	gets(a);
	n = atoi (a);
	l=strlen(a);
	
	
	
	while(1)
	{
		
		n4 = (n / 1000) % 10;
		n3 = (n / 100) % 10;
		n2 = (n / 10) % 10;
		n1 = (n % 10);
		ac = n1+n2+n3+n4;
		if(ac%4==0)
		{
			printf("%i",n);
			return 0;
		}
		n++;
	}
	
}