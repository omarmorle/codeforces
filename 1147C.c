#include <stdio.h>
int main (void)
{
    int *a;
    int b,i,k=100,x=0;
    scanf("%d",&b);
    a = malloc(b*sizeof(int));
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<k)
            k=a[i];
    }
    for(i=0;i<b;i++)
        if(a[i]==k)
            x++;
    if(x>b/2)
    printf("Bob\n");
    else
    printf("Alice\n");
    return 0;
}