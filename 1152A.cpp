#include<bits/stdc++.h>
using namespace std;
int main()
{
		int a, b, i;
		int x1, x2;
		int y1, y2;
		y1 = y2 = x1 = x2 = 0;
		cin >> a >> b;
		int primero[a];
		int segundo[b];
		
		for(i=0; i<a; i++)
		{
			cin>>primero[i];
			if(primero[i]%2==0)
				x1++;
			else
				y1++;
		}
		for(i=0; i<b; i++)
		{
			cin>>segundo[i];
			if(segundo[i]%2==0)
				x2++;
			else
				y2++;
		}
		
		int aux1, aux2, aux3, aux4;
		aux1 = x1 + y2;
		aux2 = y1 + x2;
		if(aux1>aux2)
		{
			aux3 = min(x1,y2);
			aux3 = aux3 + min(x2,y1);
			cout<<aux3<<endl;
		}
		else
		{
			aux3 = min(y1,x2);
			aux3 = aux3 + min(x1,y2);
			cout<<aux3<<endl;
		}
		/*
		if(a>b)
		{
			if(x1>y1)
				cout << y2 << endl;
			else if (x1<y1)
				cout << x2 << endl;
			else
				cout << x1 << endl;
		}
		else if(a<b)
		{
			if(x2>y2)
				cout << y1 << endl;
			else if (x2<y2)
				cout << x1 << endl;
			else
				cout << x2 << endl;
		}
		else
		{
			cout << "estamos en eso" << endl;
		}
		*/
		
		
		return 0;
}