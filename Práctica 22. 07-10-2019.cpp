#include<iostream> 
#include<conio.h> 
using namespace std;
int main()
{
	int numeros[100],n;
	cout<<"D�gite el n�mero de elementos que va a tener el arreglo: ";
	cin>>n;
	
	for (int i=0; i<n; i++)
	{
		cout<<"Digite el n�mero: ";
		cin>>numeros[i];
	}
	
	//Ahora vamos a guardar los elementoos con sus �ndices asociados
	
	for (int i=0;i<n;i++)
	{
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	getche();
	return 0;
}
