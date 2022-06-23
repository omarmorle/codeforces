#include <bits/stdc++.h>
using namespace std;


int main() {

  long long a, b, c, m;
  cin >> a >> b >> c;

  m = min(a, b);
  a -= m;
  b -= m;

  m *= 2;
  m += 2 * c;
  if (a || b) m++;
  cout << m << endl;


  return 0;
}