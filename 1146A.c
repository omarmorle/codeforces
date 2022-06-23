#include <stdio.h>
#include <string.h>
#include <conio.h>

int calc(int as, int mitad, int tam, int res);

int main (void)
{
	int tam_cadena, as=0, i, mitad, res=0;
	char cad[50];
	scanf("%s",&cad);
	tam_cadena = strlen(cad);
	for(i=0; i<tam_cadena; i++)
	{
		if(cad[i]=='a')
			as++;
	};
	mitad = tam_cadena / 2;
	res = calc(as, mitad, tam_cadena, res);
	printf("%i",tam_cadena-res);
	return 0;
//	printf("%s %i %i",cad,tam_cadena,as);
}

int calc(int as, int mitad, int tam, int res)
{
	if(as>mitad)
	{
		return res;
	}
	else
	{
		res++;
		tam--;
		mitad = tam / 2;
		calc(as, mitad, tam, res);
	}
}