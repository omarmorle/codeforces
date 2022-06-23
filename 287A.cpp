#include<bits/stdc++.h>
using namespace std;

int main() {

	int cuadro[4][4];
	int ancho;

	for (int i = 0; i < 4; ++i) 
	{
	    for (int j = 0; j < 4; ++j) 
		{
			 char val;
	         cin >> val;
			 if (val == '#') cuadro[i][j] = 1;
			 else cuadro[i][j] = 0;
		}
	}
	         
    for (int i = 0; i < 3; ++i) 
	{
	    for (int j = 0; j < 3; ++j) 
		{
	        ancho = cuadro[i][j] + cuadro[i][j+1] + cuadro[i+1][j] + cuadro[i+1][j+1];
			if (ancho >= 3 || ancho <= 1) 
			{ 
				cout << "YES" << endl; 
				return 0; 
			}
		 }
	}
	
	cout << "NO" << endl; 
	return 0;
}