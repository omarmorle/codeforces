#include <string.h>
#include <bits/stdc++.h>
using namespace std;

const int maxn=2e5+5;
int cut[maxn];

int main(void) 
{

    long long tc, num, t = 1, choose;

    cin>>tc;

    while (tc--)
    {

        long long cnt = 0;
        cin>>num;

        bool ck = true;
        while (num != 1)
        {

            if(num % 5 == 0) 
                num = (num / 5) * 4;
            else if(num % 3 == 0) 
                num = (num / 3) * 2;
            else if(num % 2 == 0) 
                num /= 2;
            else
            {
                cout << "-1" << endl;
                ck = false;
                break;
            }
            cnt++;
        }
        if(ck) 
            cout << cnt << endl;
    }

    return 0;
}