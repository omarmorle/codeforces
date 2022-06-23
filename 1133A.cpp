#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long tc, num, t = 1, pownum;
    long long h1, h2, m1,m2;

    scanf("%lld:%lld", &h1, &m1);
    scanf("%lld:%lld", &h2, &m2);
    
    long long min1 = (h1 * 60) + m1;
    long long min2 = (h2 * 60) + m2;

    long long dif = min2 - min1;

    if(dif%2==0) 
        dif++;
    dif/=2;

    min1 += dif;

    long long ans1 = min1 / 60;
    long long ans2 = min1 % 60;

    if(ans1 < 10 && ans2 < 10)
        printf("0%lld:0%lld\n", ans1, ans2);
    else if(ans1 < 10)
        printf("0%lld:%lld\n", ans1, ans2);
    else if(ans2 < 10)
        printf("%lld:0%lld\n", ans1, ans2);
    else
        printf("%lld:%lld\n", ans1, ans2);

    return 0;
}