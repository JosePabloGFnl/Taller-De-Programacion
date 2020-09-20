#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	//programa de un contador que va aumentando de 2 en dos y suma con el resultado anterior
	int suma,numero=0;
	for (numero=2;numero<=100;numero+=2) //numero+=2 es numero=numero+2
	{
		suma=suma+numero;
		printf("La suma es de: %d\n",suma);
	}
	
	getche();
	
}
