#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	//Escribe un programa que defina un vector de n�meros y calcule si existe alg�n n�mero en el vector cuyo valor equivalea a la suma del resto de n�meros del vector
	//Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por dos y muestre el segundo arreglo
	int n, num[100],i, suma=0;
	printf("Ingrese la cantidad de n�meros ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Ingrese el n�mero\n");
        scanf("%d",&num[i]);
        suma=suma+num[i];
	}
}
