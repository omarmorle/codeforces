#include <stdio.h>

int main (void)
{
	int pos, neg, in, sum1, sum2, sum3, res1, res2;
	scanf("%i",&pos);scanf("%i",&neg);scanf("%i",&in);
	sum1 = pos + in;
	sum2 = neg + in;
	sum3 = pos + neg;
	
	if(in == 0)
	{
		if(pos == neg)
			printf("0");
		else if(pos>neg)
			printf("+");
		else
			printf("-");
	}
	else if(in < sum3)
	{
		res1 = sum1 - neg;
		res2 = sum2 - pos;
		if(res1 == 0)
			printf("?");
		else if (res2 == 0)
			printf("?");
		else
		{
			if(neg>sum1)
				printf("-");
			else if(pos>sum2)
				printf("+");	
			else
				printf("?");
		}
	}
	else
		printf("?");
	
	return 0;
}