#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
  long long n, s;
  
  cin >> n >> s;
  
  long long ans = s / n;
  
  if (s % n > 0) 
      ans++;

  cout << ans << "\n";
  
  return 0;
}