#include<bits/stdc++.h>
using namespace std;

int main()
{
  string cad;
  cin>>cad;
  for(int i=0;i<cad.size();i=i+2)
  {
    for(int j=0;j<i;j=j+2)
      {
          if(cad[i]<cad[j])
          swap(cad[i],cad[j]);
      }
  }
  cout<<cad<<endl;

}