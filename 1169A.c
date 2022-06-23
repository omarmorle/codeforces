#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int n, di, df, vi, vf;
	int x, y, aux1, aux2;
	
	scanf("%i",&n);scanf("%i",&di);
	scanf("%i",&df);scanf("%i",&vi);
	scanf("%i",&vf);
	
	x = di; y = vi;
	aux1 = aux2 = 0;

	do
	{
		//printf("(%i,%i)\n",x,y);
		
		if(x == y)
			{
				printf("YES");
				return 0;
			}		

		if(x==df)
			break;
		if(y==vf)
			break;
		
		x++;y--;
		if(x>n)
			x=1;
		if(y<1)
			y=n;

	}while(1);
	
	printf("NO");
	
	return 0;
}