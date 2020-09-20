#include<stdio.h> 
#include<conio.h> 
#include<windows.h>
main()
{
	int n,i,j,matriz[50][50];
	int suma_diagonal=0;
	int suma_diagonal_sec=0;
	int suma_triang_sup=0;
	int suma_triang_inf=0;
	printf("Tamaño de la matriz \n");
	scanf("%d",&n);
	//filas
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			
		
		printf("Ingrese el numero\n");
		scanf("%d",&matriz[i][j]);
		//suma diagonal principal
		
			if (i==j){
				suma_diagonal+=matriz[i][j];
			}
			//suma diagonal secundaria
			if ((n+1)==(i+j)){
				suma_diagonal_sec+=matriz[i][j];
			}
			//suma triangulo superior
			if (i<j){
				suma_triang_sup+=matriz[i][j];
			}
			//suma triangular inferior
			if (i>j)
			{
				suma_triang_inf+=matriz[i][j];
			}
		}
	}
	for (i=0;i<=n;i++)
	{
		for (j=0;j<=n;j++)
		{
			printf ("%d, ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("Suma diagonal principal: %d \n",suma_diagonal);
	printf("Suma diagonal secundaria: %d \n",suma_diagonal_sec);
	printf("Suma triangular superior: %d \n",suma_triang_sup);
	printf("Suma triangular inferior: %d \n",suma_triang_inf);
	
	getche();
}
