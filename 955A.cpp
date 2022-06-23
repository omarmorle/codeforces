#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int hh,mm;
    int h,d,c,n;
    scanf("%d%d",&hh,&mm);
    scanf("%d%d%d%d",&h,&d,&c,&n);
    if(hh>=20)
    {
        printf("%.6f\n",(int)(ceil(h*1.0/n))*c*0.8);
    }
    else
    {
        double ans1=(int)(ceil(h*1.0/n))*c;
        int gap=(20*60)-(hh*60+mm);
        double ans2=(int)(ceil((h+gap*d)*1.0/n))*c*0.8;
        printf("%.6f\n",min(ans1,ans2));
    }
}