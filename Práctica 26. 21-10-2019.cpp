//Hacer un programa para rellenar una matriz pididendo al usuario el numero de filas y columnas, posteriormente mostrar la matriz en pantalla.
#include<iostream> 
#include<conio.h>

using namespace std;
int main (){

int numeros [100][100], filas, columnas;
cout<<"Digite el número de filas: ";
cin>>filas;
cout<<"Digite el número de columas: ";
cin>>columnas;

//almacenando elementos en la matriz
for (int i=0;i<filas;i++)
{
	for (int j=0;j<columnas;j++)
	{
		cout<<"Digite un número ["<<i<<"]["<<j<<"]";
		cin>>numeros[i][j];
	}
}

//mostrando la matriz
for (int i=0;i<filas;i++)
{
	for (int j=0;j<columnas;j++)
	{
		cout<<numeros[i][j];
	}
	cout<<"\n";
}

getche();
return 0;

}

