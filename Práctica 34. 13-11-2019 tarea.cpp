#include<stdio.h>
#include<conio.h>
#include<windows.h>
void crear_arreglo();
void imprimir_arreglo();
int matriz [50][50],i,j,n;
main ()
{
	crear_arreglo();
	imprimir_arreglo();
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
	return;
}
