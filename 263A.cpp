#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int mat[5][5], i, j, auxi, auxj;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                auxi=i+1;
                auxj=j+1;
            }
        }
    }
    cout<<abs(auxi-3)+abs(auxj-3)<<endl;
    
    return 0;
}