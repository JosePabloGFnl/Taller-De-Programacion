#include<stdio.h> 
#include<conio.h> 
#include<windows.h>
main()
{
	float sueldo,sueldof,inc;
	int cat,num;
	char nombre [45];
	printf("Categoría:             Incremento:\n");
	printf("    1                     4.5%  \n");
	printf("    2                     6.3%  \n");
	printf("    3                     7.5%  \n");
	printf("    4                     9.3%  \n");
	printf("Ingrese su nombre: \n");
	scanf("%[^\n]", &nombre);
	printf("Ingrese el número de empleado: \n");
	scanf("%d",&num);
	printf("Ingrese su sueldo: \n");
	scanf("%f", &sueldo);
	printf("Ingrese la categoría: \n");
	scanf("%d", &cat);
	if (cat>=1 && cat<=4)
	{
		switch (cat)
		{
			case 1:
			{
				inc=sueldo*.045;
				//printf("Número de empleado: %d \n",&num);
				//printf("Nombre del empleado: %s \n", &nombre);
				//printf("Sueldo inicial: %f \n", &sueldo);
				printf("Categoría: 1 \n");
				//printf("Sueldo final: %f \n",&sueldof);
				break;
			}
			
			case 2:
			{
				inc=sueldo*.063;
				//printf("%d \n",&num);
				//printf("%s \n", &nombre);
				//printf("%f \n", &sueldo);
				printf("Categoría 2 \n");
				//printf("Sueldo final: %f \n",&sueldof);
				break;
			}
			
			case 3:
			{
				inc=sueldo*.075;
				//printf("%d \n",&num);
				//printf("%s \n", &nombre);
				//printf("%f \n", &sueldo);
				printf("Categoría 3 \n");
				//printf("Sueldo final: %f \n",&sueldof);
				break;
			}
			
			case 4:
			{
				inc=sueldo*.093;
			//	printf("%d \n",&num);
			//	printf("%s \n", &nombre);
			//	printf("%f \n", &sueldo);
				printf("Categoría 4 \n");
			//	printf("Sueldo final: %f \n",&sueldof);
				break;
			}
		}
		sueldof=sueldo+inc;
		printf("Número de empleado: %d \n",num);
		printf("Nombre del empleado: %s \n", nombre);
		printf("Sueldo inicial: %f \n", sueldo);
		printf("Sueldo final: %f \n",sueldof);
	} 
	else
	{
		printf("No existe la categoría, chamaco baboso");
	}
	
	getche();
}
