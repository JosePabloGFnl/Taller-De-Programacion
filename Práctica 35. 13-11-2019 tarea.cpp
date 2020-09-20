#include<stdio.h>
#include<conio.h>
#include<windows.h>
void crear_arreglo();
void imprimir_arreglo();
void suma_diagonal();
void suma_diagonal_sec();
void suma_triang_sup();
void suma_triang_inf();
int matriz [50][50],i,j,n;
int sumadiagonal=0;
	int sumadiagonal_sec=0;
	int sumatriang_sup=0;
	int sumatriang_inf=0;
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
				
					
						if (i==j){
				sumadiagonal+=matriz[i][j];
			
			}
			//suma diagonal secundaria
			
				
				if ((n+1)==(i+j)){
				sumadiagonal_sec+=matriz[i][j];
			}
			
			//suma triangulo superior
			
				
				if (i<j){
				sumatriang_sup+=matriz[i][j];
			}
			
			//suma triangular inferior
			
				
				if (i>j)
			{
				sumatriang_inf+=matriz[i][j];
			}
			
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
		printf("Suma diagonal principal: %d \n",sumadiagonal);
	printf("Suma diagonal secundaria: %d \n",sumadiagonal_sec);
	printf("Suma triangular superior: %d \n",sumatriang_sup);
	printf("Suma triangular inferior: %d \n",sumatriang_inf);
	return;
}
