#include<stdio.h> 
#include<conio.h> 
#include<windows.h>
main()
{
	float sueldo,sueldof,inc;
	int cat,num,opc,cont=0,c1=0,c2=0,c3=0,c4=0;
	char nombre [45];
	do
	{
		cont++;
	system("cls"); //clear screen
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
				c1++;
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
				c2++;
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
				c3++;
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
				c4++;
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
		printf("No existe la categoría, chamaco baboso\n");
	}
	printf("Desea continuar, 1=Sí, 2=No\n");
	scanf("%d",opc);
	
	}
	while (opc==1);
	printf("El número de empleados guardados es: %d\n",cont);
	printf("El número de empleados guardados de la categoría 1 es: %d\n",c1);
	printf("El número de empleados guardados de la categoría 2 es: %d\n",c2);
	printf("El número de empleados guardados de la categoría 3 es: %d\n",c3);
	printf("El número de empleados guardados de la categoría 4 es: %d\n",c4);
	
	getche();
}
