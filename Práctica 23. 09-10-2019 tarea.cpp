#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{

int i,n,numeros[100],suma=0,suma2;
float prom;
printf("�Cu�nto n�meros desea sumar?\n");
scanf("%d",&n);
for (i=0;i<n;i++){

printf("Ingrese el n�mero\n");
scanf("%d",&numeros[i]);
suma=suma+numeros[i];

}
prom=suma/n;
for (i=0;i<n;i++)
{
	printf("%d ",i);
	printf("%d\n",numeros[i]);
	suma2=numeros[0]+numeros[n];
	if (numeros[i]>prom)
	{
		printf("El n�mero es mayor al promedio: %d\n",numeros[i]);
	}
}
printf("Suma total: %d\n",suma);
printf("Suma del primero con el �ltimo: %d\n",suma2);
printf("Promedio: %.2f\n",prom);
getche();

	
}
