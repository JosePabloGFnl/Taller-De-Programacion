//programa que calcula la suma de n n�meros con for c:
#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	int n,i;
	float suma,numero,prom;
	printf("�Cu�ntos n�meros son?\n");
	scanf("%d",&n);
	suma=0;
	for (i=1;i<=n;i++) //El incremento va de 1 en 1 con i++
	{
		printf("Inresa el n�mero: \n");
		scanf("%f",&numero);
		suma=suma+numero;
	}
	prom=suma/n;
	printf("Suma: %.2f\n",suma);
	printf("Promedio: %.2f\n",prom);
	
	getche();
}
