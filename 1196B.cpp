#include <bits/stdc++.h>
using namespace std;

const int maxn=2e5+5;
int cut[maxn];

int main(void) 
{
    int q, n, k, a;
    ios::sync_with_stdio(false);
    cin >> q;
    while (q--) {
        cin >> n >> k;
        int ci = 0;
        long long sum = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> a;
            sum += a;
            if (ci + 1 < k && sum % 2 == 1) {
                sum = 0;
                cut[ci++] = i;
            }
        }
        if (sum % 2 == 1) {
            cout << "YES" << endl;
            for (int i = 0; i + 1 < k; ++i) {
                cout << cut[i] << " ";
            }
            cout << n << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}