//programa que calcula la suma de n números con for c:
#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	int n,i;
	float suma,numero,prom;
	printf("¿Cuántos números son?\n");
	scanf("%d",&n);
	suma=0;
	for (i=1;i<=n;i++) //El incremento va de 1 en 1 con i++
	{
		printf("Inresa el número: \n");
		scanf("%f",&numero);
		suma=suma+numero;
	}
	prom=suma/n;
	printf("Suma: %.2f\n",suma);
	printf("Promedio: %.2f\n",prom);
	
	getche();
}
