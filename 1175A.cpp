#include<bits/stdc++.h>
 #include<set>
 using namespace std;
 int main()
 {
     int t;
     scanf("%d",&t);
     while(t--)
     {
         long long n;
         long long k;
         long long ans = 0;
         scanf("%lld %lld",&n,&k);
         while(n)
         {
             if(n % k)
             ans += n%k, n = n/k*k;
             else
             {
                 ans++;
                 n /= k;
             }
 
         }
         cout << ans << endl;
     }
 
     return 0;
 }