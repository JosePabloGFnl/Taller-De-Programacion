#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	int mat,car,sem;
	float prom;
	
printf("Carrera         Semestre          Promedio \n");
printf("-------------------------------------------\n");
printf("1.-Industrial     >=6                 >=8.5\n");
printf("2.-Telemática     >=5                 >=9.0\n");
printf("3.-Computación    >=6                 >=8.8\n");
printf("4.-Mecánica       >=7                 >=9.0\n");
printf("-------------------------------------------\n");

printf("Ingresa la matrícula del alumno: \n");
scanf("%d", &mat);
printf("Ingresa la carrera del alumno: \n");
scanf("%d", &car);
printf("Ingresa el semestre del alumno: \n");
scanf("%d", &sem);
printf("Ingresa el promedio del alumno: \n");
scanf("%f", &prom);
if (car>=1 && car<=4)
{
	if (car==1)
	{
		if (sem>= 6 && prom<=8.5)
		{
			printf("Puede ser asistente\n");
			printf("Carrera Industrial \n");
		}
		else
		{
			printf("No puede ser asistente\n");
			printf("Carrera Industrial \n");
		}
	}
	else
	{
		if (car==2)
		{
			if (sem>= 5 && prom<=9.0)
		{
			printf("Puede ser asistente\n");
			printf("Carrera Telemática \n");
		}
		else
		{
			printf("No puede ser asistente\n");
			printf("Carrera Telemática \n");
		
		}
		}
	
		}
			
		else
		{
			if (car==3)
		{
			if (sem>= 6 && prom<=8.8)
		{
			printf("Puede ser asistente\n");
			printf("Carrera Computación \n");
		}
		else
		{
			printf("No puede ser asistente\n");
			printf("Carrera Computación \n");
		
		}
		}
		
		}
		

else
{
	if (sem>= 7 && prom<=9.0)
	{
		printf("Puede ser asistente\n");
			printf("Carrera Mecánica \n");
	}
	else
		{
			printf("No puede ser asistente\n");
			printf("Carrera Mecánica \n");
		

		}
		printf("El alumno con la matrícula %d \n", mat);
printf("Semestre %d \n", sem);
printf("promedio %f", prom);
}

else
{
	Printf("no existe la carrera \n");
}
	getche();
}
