#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	

char nom [45];
int hor,dep,opc,cont=0,c1=0,c2=0,c3=0,c4=0;
float sueldof;
do
{
	cont++;

printf("Ingrese su nombre completo\n");
scanf("%[^\n]",&nom);
printf("¿En qué departamento trabaja usted?\n");
printf("1. Sistemas\n");
printf("2. Producción\n");
printf("3. Recursos humanos\n");
scanf("%d",&dep);
printf("Ingrese la cantidad de horas trabajadas\n");
scanf("%d",&hor);
if(dep>= 1 && dep<=3)
	{
		switch (dep)
		{
			case 1:
			{
				c1++;
				sueldof=(69.00*hor);
				break;
			}
			
				case 2:
			{
				c2++;
				sueldof=(75.00*hor);
				break;
			}
			
				case 3:
			{
				c3++;
				sueldof=(48.50*hor);
				break;
			}
			
		}
		
			
	printf("El empleado: %s\n",nom);
	printf("Departamento: %d\n",dep);
	printf("Horas laboradas: %d\n",hor);
	printf("Salario: %.2f\n",sueldof);
	}
	
	else
	{
		printf("No existe el departamento. \n");	
	}
		printf("Desea continuar, 1=Sí, 2=No\n");
	scanf("%d",opc);
	}while (opc==1);
		printf("El número de empleados guardados es: %d\n",cont);
	printf("El número de empleados guardados de la categoría Sistemas es: %d\n",c1);
	printf("El número de empleados guardados de la categoría Producción es: %d\n",c2);
	printf("El número de empleados guardados de la categoría Recursos humanos es: %d\n",c3);
	getche();
	
	}

