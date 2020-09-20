#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	

char nom [45];
int hor,dep;
float sueldof;
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
				sueldof=(69.00*hor);
				break;
			}
			
				case 2:
			{
				sueldof=(75.00*hor);
				break;
			}
			
				case 3:
			{
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
	
	getche();
	
	
	
	}

