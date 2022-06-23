#include <string.h>
#include <bits/stdc++.h>
using namespace std;

const int maxn=2e5+5;
int cut[maxn];

int main(void) 
{
    int h, m, a;
    scanf("%d:%d",&h,&m);
    scanf("%d",&a);
    int mm=(h*60+m+a)%(24*60);
    printf("%02d:%02d\n",mm/60,mm%60);
    return 0;
}