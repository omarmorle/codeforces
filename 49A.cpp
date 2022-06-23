#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    bool res=false;
    int x=s.length()-1;
    while(res!=true)
    {
        res=isalpha(s[x]);
        if(res==true &&(s[x]=='A' ||s[x]=='a' || s[x]=='e' || s[x]=='E' || s[x]=='I' ||s[x]=='i' ||s[x]=='o' || s[x]=='O' || s[x]=='U' ||s[x]=='u' ||s[x]=='Y' || s[x]=='y'))
         {cout<<"YES"<<endl; return 0;}
        else if(res==true)
            {cout<<"NO"<<endl; return 0;}
        else
            x--;
    }
 
}