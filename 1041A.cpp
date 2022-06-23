#include<bits/stdc++.h>
using namespace std;
void mSort(int *A,int n);
void merge(int *izq,int nIzq,int *der,int nDer,int *A);
int main()
{
	int n,i,j,aux,x;
	cin>>n;
	int array[n];
	int contador=0;
	for(i=0;i<n;i++)
	{
	    cin>>array[i];
	}
	int medio = sizeof(array) / sizeof(int);
	mSort(array,medio);
	x=array[0];
	for(i=0;i<n-1;i++)
	{
	    x = array[i+1]-array[i];
	    contador = contador + x;
	    
	    /*
	    if(x!=array[i])
	    {
	        contador++;
	        while(x!=array[i])
	        {
	            x++;
	            cout<<x<<endl;
	        }
	    }
	    */
	}
	cout<<contador-(n-1)<<endl;
	return 0;
}

void mSort(int *A,int n)
{
 if(n==1){return;}
 int mitad = n / 2;
 int *izq = new int[mitad];
 int *der = new int[n-mitad];
 for(int i=0;i<mitad;i++)
  izq[i] = A[i];
 for(int i=mitad;i<n;i++)
  der[i-mitad] = A[i];
 mSort(izq, mitad);
 mSort(der, n-mitad);
 merge(izq, mitad, der, n-mitad, A);
}

void merge(int *izq,int nIzq,int *der,int nDer,int *A)
{
 int i=0,j=0,k=0;
 while( ( i < nIzq ) && ( j < nDer ) )
 {
  if( izq[i] <= der[j])
  {
   A[k] = izq[i];
   i++;
  }
  else
  {
   A[k] = der[j];
   j++;
  }
  k++;
 }
 while(i < nIzq)
 {
  A[k] = izq[i];
  i++;k++;
 }
 while(j < nDer)
 {
  A[k] = der[j];
  j++;k++;
 }
}