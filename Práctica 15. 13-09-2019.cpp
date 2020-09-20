#include<stdio.h> 
#include<conio.h> 
#include<windows.h> 
main()
{
	int numero;
	long int fact, nfact;
	
	printf("Programa que calcula el factorial de un número \n");
	printf("Ingrese el número: \n");
	scanf("%d",&numero);
	fact=1;
	printf("%i      nfact      fact \n");
	
	for (int i=1; i<=numero; i++)
	{
		nfact=fact;
		printf(" %d      *        %d     =       %d \n",i,nfact,fact);
	}
	printf("El factorial de %d es: %1d \n",numero,fact);
	getche();
	
}
