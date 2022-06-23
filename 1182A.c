#include <stdio.h>
#include <math.h>

int main (void)
{	
	int n, mitad;
	double te;
	scanf("%i",&n);
	
	if(n==1)
		printf("0");
	else
	{
		if(n%2==0)
		{
			mitad = n/2;
			te =pow(2,mitad);
			mitad = te;
			printf("%i",mitad);
		}
		else
		{
			printf("0");
		}
	}
	
	return 0;
}