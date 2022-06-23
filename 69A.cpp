#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n, i, aux, auxa=0,auxb=0,auxc=0;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>aux;
        auxa=auxa+aux;
        cin>>aux;
        auxb=auxb+aux;
        cin>>aux;
        auxc=auxc+aux;
    }
    
    if(auxa==0&&auxb==0&&auxc==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;
}