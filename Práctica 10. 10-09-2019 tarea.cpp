#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	

char nom [45];
int hor,dep,con=0,hex,hexuno;
float sueldof,sueldot;
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
	
	
		printf("Desea calcular horas extras...SI=1 NO=0 \n");
	scanf("%d",&con);
	if (con==1)
	{
		if(hor>48)
		{
			switch (dep)
			{
			case 1:
				hexuno=(hor-48);
				hex=(hexuno*69);
				sueldof=(hor*69);
				printf("El empleado: %s\n",nom);
	printf("Departamento: %d\n",dep);
	printf("Horas laboradas: %d\n",hor);
	printf("Salario: %.2f\n",sueldof);
	printf("Horas extras: ",hex);
	printf(" pesos.\n");
				//cout << "El empleado: " << nom << " Del departamento " << " SISTEMAS " << " Trabajo un total de : " << hor << " Horas en la semana. " << endl << endl;
				//cout << "Salario percibido: " << sueldof << " Pesos M/N " << endl;
				//cout << "Horas extra: " << Hex << " Pesos M/N " << endl;
				sueldot=((hor*69)+hex);
				//cout << "Total: " << sueldof << " Pesos M/N" << endl;
				printf("Total: \n",sueldot);
				break;
			case 2:
				hexuno=(hor-48);
				hex=(hexuno*75);
				sueldof=(hor*75);
					printf("El empleado: %s\n",nom);
	printf("Departamento: %d\n",dep);
	printf("Horas laboradas: %d\n",hor);
	printf("Salario: %.2f\n",sueldof);
	printf("Horas extras: ",hex);
	printf(" pesos.\n");
				//cout << "El empleado: " << nom << " Del departamento " << " PRODUCCION " << " Trabajo un total de : " << hor << " Horas en la semana." << endl << endl;
				//cout << "Salario percibido: " << sueldof << " Pesos M/N" << endl << endl;
				sueldot=((hor*75)+hex);
				//cout << "Total: " << S << " Pesos M/N" << endl;
				printf("Total: \n",sueldot);
				break;
			case 3:
				hexuno=(hor-48);
				hex=(hexuno*48.5);
				sueldof=(hor*48.50);
					printf("El empleado: %s\n",nom);
	printf("Departamento: %d\n",dep);
	printf("Horas laboradas: %d\n",hor);
	printf("Salario: %.2f\n",sueldof);
	printf("Horas extras: ",hex);
	printf(" pesos.\n");
				//cout << "El empleado: " << nom << " Del departamento " << " RECURSOS HUMANOS " << " Trabajo un total de : " << hor << " Horas en la semana. " << endl << endl;
				//cout << "Salario percibido: " << sueldof << " Pesos M/N" << endl << endl;
				sueldot=((hor*48.50)+hex);
				//cout << "Total: " << sueldof << " Pesos M/N" << endl;
				printf("Total: \n",sueldot);
				break;
			}
		}
		else
		{
			printf("No cuenta con horas extras acumuladas.\n");
		}
	}
		else
	{
		printf("Gracias por su atención. \n");
	}
	
	}
	else
	{
		printf("No existe el departamento. \n");	
	}
	
	getche();
	
	
	
	}
