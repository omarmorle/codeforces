#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forna(i,a,n) for(int i =a; i < n; i++)
#define fornd(i,a) for (int i = (a)-1; i >= 0; i--)
#define pb push
#define fi first
#define se second
#define endl '\n'
#define __ ios_base::sync_with_stdio(0);cin.tie(0);
#define all(x) x.begin(), x.end()
typedef long long int unsigned lliu;
typedef long long int lli;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<lli> vi;
typedef vector<vi> vvi;
typedef vector<pi> vpi;

int main(){__
	int t, nr, ng, nb;
	cin>>t;
	while(t--){
		cin>>nr>>ng>>nb;
		vi r(nr), g(ng), b(nb);
		forn(i, nr)
			cin>>r[i];
		forn(i, ng)
			cin>>g[i];
		forn(i, nb)
			cin>>b[i];
		sort(all(r));
		sort(all(g));
		sort(all(b));
		lli respuesta=4000000000000000000;
		lli combinaciones[4];
		lli maxg, ming, maxb, minb;
		int gM, gm, bM, bm;
		forn(i, nr){
			gM=lower_bound(all(g), r[i])-g.begin();
			bM=lower_bound(all(b), r[i])-b.begin();
			gM=gM<ng?gM:ng-1;
			bM=bM<nb?bM:nb-1;
			maxg=g[gM];
			maxb=b[bM];
            gm=upper_bound(all(g), r[i])-g.begin();
            bm=upper_bound(all(b), r[i])-b.begin();
			if(gm) gm--;
			if(bm) bm--;
			ming=g[gm];
			minb=b[bm];
			combinaciones[0]=(r[i]-maxg)*(r[i]-maxg)+(maxg-maxb)*(maxg-maxb)+(maxb-r[i])*(maxb-r[i]);
			combinaciones[1]=(r[i]-maxg)*(r[i]-maxg)+(maxg-minb)*(maxg-minb)+(minb-r[i])*(minb-r[i]);
			combinaciones[2]=(r[i]-ming)*(r[i]-ming)+(ming-maxb)*(ming-maxb)+(maxb-r[i])*(maxb-r[i]);
			combinaciones[3]=(r[i]-ming)*(r[i]-ming)+(ming-minb)*(ming-minb)+(minb-r[i])*(minb-r[i]);
			forn(j, 4)
				respuesta=min(respuesta, combinaciones[j]);
		}
		forn(i, ng){
			gM=lower_bound(all(r), g[i])-r.begin();
			bM=lower_bound(all(b), g[i])-b.begin();
			gM=gM<nr?gM:nr-1;
			bM=bM<nb?bM:nb-1;
			maxg=r[gM];
			maxb=b[bM];
            gm=upper_bound(all(r), g[i])-r.begin();
            bm=upper_bound(all(b), g[i])-b.begin();
			if(gm) gm--;
			if(bm) bm--;
			ming=r[gm];
			minb=b[bm];
			combinaciones[0]=(g[i]-maxg)*(g[i]-maxg)+(maxg-maxb)*(maxg-maxb)+(maxb-g[i])*(maxb-g[i]);
			combinaciones[1]=(g[i]-maxg)*(g[i]-maxg)+(maxg-minb)*(maxg-minb)+(minb-g[i])*(minb-g[i]);
			combinaciones[2]=(g[i]-ming)*(g[i]-ming)+(ming-maxb)*(ming-maxb)+(maxb-g[i])*(maxb-g[i]);
			combinaciones[3]=(g[i]-ming)*(g[i]-ming)+(ming-minb)*(ming-minb)+(minb-g[i])*(minb-g[i]);
			forn(j, 4)
				respuesta=min(respuesta, combinaciones[j]);
		}
		forn(i, nb){
			gM=lower_bound(all(g), b[i])-g.begin();
			bM=lower_bound(all(r), b[i])-r.begin();
			gM=gM<ng?gM:ng-1;
			bM=bM<nr?bM:nr-1;
			maxg=g[gM];
			maxb=r[bM];
            gm=upper_bound(all(g), b[i])-g.begin();
            bm=upper_bound(all(r), b[i])-r.begin();
			if(gm) gm--;
			if(bm) bm--;
			ming=g[gm];
			minb=r[bm];
			combinaciones[0]=(b[i]-maxg)*(b[i]-maxg)+(maxg-maxb)*(maxg-maxb)+(maxb-b[i])*(maxb-b[i]);
			combinaciones[1]=(b[i]-maxg)*(b[i]-maxg)+(maxg-minb)*(maxg-minb)+(minb-b[i])*(minb-b[i]);
			combinaciones[2]=(b[i]-ming)*(b[i]-ming)+(ming-maxb)*(ming-maxb)+(maxb-b[i])*(maxb-b[i]);
			combinaciones[3]=(b[i]-ming)*(b[i]-ming)+(ming-minb)*(ming-minb)+(minb-b[i])*(minb-b[i]);
			forn(j, 4)
				respuesta=min(respuesta, combinaciones[j]);
		}
		cout<<respuesta<<endl;
	}
	return 0;
}