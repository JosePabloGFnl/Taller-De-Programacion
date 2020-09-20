#include<stdio.h>
#include<conio.h>
#include<windows.h>
void crear_arreglo();
void imprimir_arreglo();
void sumar_arreglo();
int matriz [50][50],i,j,n,suma;
main ()
{
	crear_arreglo();
	imprimir_arreglo();
	sumar_arreglo();
}
void crear_arreglo()
{
	printf("Ingresa el tamano de la matriz...:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			//matriz[i][j]=rand()%100;
			printf ("Ingresa el número [%d][%d]...:\n",i,j);
			scanf("%d",&matriz[i][j]);
		}
	 } 
	 return; //Regresa al main()
}

void sumar_arreglo()
{
	suma=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if (i==j) //diagonal principal
			{
			suma=suma+matriz[i][j];
			}
		}
	}
}

void imprimir_arreglo()
{
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			printf("\t %d \t",matriz[i][j]);
		}
		printf("\n");
	}
	printf("La suma de la matriz es: %d \n",suma);
	return;
}
