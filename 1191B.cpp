#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
 
int main(void)
{
    int i, a[3], x=0, t;
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    
    if(s1[1]==s2[1]&&s2[1]==s3[1])
    {
        if(s1[0]==s2[0]&&s2[0]==s3[0])
        {
            cout<<"0"<<endl;
            return 0;
        }
        a[0]=stoi(s1);
        a[1]=stoi(s2);
        a[2]=stoi(s3);
        sort(a,a+3);
        int aux=a[0]+2;
        for(i=a[0], t=0; i<=aux; i++, t++)
        {
            if(a[t]!=i)
                x++;
        }
        if(x==0)
        {
            cout<<"0"<<endl;
            return 0;
        }
        else
        {
            if(a[0]==a[1]||a[1]==a[2])
            {
                cout<<"1"<<endl;
                return 0;
            }
            else if(abs(a[1]-a[0])==1||abs(a[1]-a[0])==2||abs(a[2]-a[0])==2||abs(a[2]-a[0])==1||abs(a[2]-a[1])==2||abs(a[2]-a[1])==1)
            {
                cout<<"1"<<endl;
                return 0;
            }
                cout<<"2"<<endl;
                return 0;
        }
    }
    
    a[0]=stoi(s1);
    a[1]=stoi(s2);
    a[2]=stoi(s3);
    
    if(s1[1]==s2[1]&&s2[1]!=s3[1])
    {
        if(s1[0]==s2[0])
        {
            cout<<"1"<<endl;
            return 0;
        }
        if(abs(a[1]-a[0])==1||abs(a[1]-a[0])==2)
        {
            cout<<"1"<<endl;
            return 0;
        }
        cout<<"2"<<endl;
        return 0;
    }
    else if(s1[1]==s3[1]&&s1[1]!=s2[1])
    {
        if(s1[0]==s3[0])
        {
            cout<<"1"<<endl;
            return 0;
        }
        if(abs(a[2]-a[0])==1||abs(a[2]-a[0])==2)
        {
            cout<<"1"<<endl;
            return 0;
        }
        cout<<"2"<<endl;
        return 0;
    }
    else if(s3[1]==s2[1]&&s2[1]!=s1[1])
    {
        if(s3[0]==s2[0])
        {
            cout<<"1"<<endl;
            return 0;
        }
        if(abs(a[2]-a[1])==1||abs(a[2]-a[1])==2)
        {
            cout<<"1"<<endl;
            return 0;
        }
        cout<<"2"<<endl;
        return 0;
    }
    cout<<"2"<<endl;
    return 0;
    
    return 0;
}