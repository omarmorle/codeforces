#include<stdio.h> 
#include<string.h>
int n;
char s1[100005],s2[100005];
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s%s",s1,s2);
		int len1=strlen(s1);
		int len2=strlen(s2);
		int p1,p2;
		for(int i=len2-1;i>=0;i--)
		{
			if(s2[i]=='1')
			{
				p2=i;
				break;
			}
		}
		for(int i=len1-len2+p2;i>=0;i--)
		{
			if(s1[i]=='1')
			{
				p1=i;
				break;
			}
		}
		printf("%d\n",len1-p1-len2+p2);
	}
}