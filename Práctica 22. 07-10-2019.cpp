#include<iostream> 
#include<conio.h> 
using namespace std;
int main()
{
	int numeros[100],n;
	cout<<"Dígite el número de elementos que va a tener el arreglo: ";
	cin>>n;
	
	for (int i=0; i<n; i++)
	{
		cout<<"Digite el número: ";
		cin>>numeros[i];
	}
	
	//Ahora vamos a guardar los elementoos con sus índices asociados
	
	for (int i=0;i<n;i++)
	{
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	getche();
	return 0;
}
