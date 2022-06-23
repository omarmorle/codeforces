#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n,m;
	cin>>n>>m;
	cin.ignore();
	int freq[5][m];
	memset(freq,0,sizeof(freq));
	for(int  i=0;i<n;i++){
		string s;
		cin>>s;
		for(int j=0;j<m;j++){
			freq[s[j]-'A'][j]++;
		}
 
		//cout<<s<<endl;
	}
	int val[m];
	for(int i=0;i<m;i++)
		cin>>val[i];
 
	long int sum  = 0;
	int maxi;
	for(int i=0;i<m;i++){
		maxi = max(freq[0][i],max(freq[1][i],max(freq[2][i],max(freq[3][i],freq[4][i]))));
		sum+= maxi*val[i];
	}
 
	cout<<sum<<endl;
}