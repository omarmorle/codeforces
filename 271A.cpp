#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int an;
    char cad[4];
    cin>>an;
    while(1)
    {
        an++;
        itoa(an, cad, 10);
        if (cad[0]!=cad[1] && cad[0]!=cad[2] && cad[0]!=cad[3] && cad[1]!=cad[2] && cad[1]!=cad[3] && cad[2]!=cad[3])
        {
            cout<<cad<<endl;
            return 0;
        }
    }
}