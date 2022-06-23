#include <stdio.h>

int main (void)
{
	int n, i;
	scanf("%i",&n);
	int a[n];
	for (i=0; i<n; i++)
	{
		scanf("%i",&a[i]);
	}
	for (i=0; i<n; i++)
	{
		if(a[i]==1)
		{
			printf("HARD");
			return 0;
		}
	}
	printf("EASY");
	return 0;
}