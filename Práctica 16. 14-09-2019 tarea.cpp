#include<stdio.h> 
#include<conio.h> 
#include<windows.h> 
using namespace std;
main()
{
	int n,c;
	float prom,suma=0;
	printf("Ingrese la cantidad de números a capturar \n");
	scanf("%d",&c);
	for (int i=0; i<c; i++)
	{
		printf("Ingrese el valor del número \n");
		scanf("%d",&n);
		suma=n+suma;
	
	}
		printf("La suma es: %.2f \n",suma);
	printf("El promedio es: \n");
	prom=suma/c;
	printf("%.2f",prom);
	
	getche();
}
