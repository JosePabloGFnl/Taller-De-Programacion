#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	int mat,car,sem;
	float prom;
	printf(" Carrera        Semestre     Promedio \n");
	printf("-------------------------------------- \n");
	printf("1.-Industrial       >= 6        >= 8.5 \n");
	printf("2.-Telematica       >= 5        >= 9.0 \n");
	printf("3.-Computacion      >= 6        >= 8.8 \n");
	printf("4.-Mecanica         >= 7        >= 9.0 \n");
	printf("--------------------------------------- \n");

	printf("Ingresa la matricula del alumno:\n");
	scanf("%d",&mat);
	printf("Ingresa la carrera del alumno:\n");
	scanf("%d",&car);
	printf("Ingresa el semestre:\n");
	scanf("%d",&sem);
	printf("Ingresa el promedio del alumno:\n");
	scanf("%f",&prom);
	if(car>= 1 && car<=4)
	{
		switch (car)
		{
			case 1:
			{
				if (sem>=6 && prom>=8.5)
				{
					printf("Asistente Industrial.\n");
				}	
				else
				{
					printf("No Asistente Industrial.\n");
				}
				break;
			}
			
				case 2:
			{
				if (sem>=5 && prom>=9.0)
				{
					printf("Asistente Telemático.\n");
				}	
				else
				{
					printf("No Asistente Telemático.\n");
				}
				break;
			}
			
				case 3:
			{
				if (sem>=6 && prom>=8.8)
				{
					printf("Asistente Computación.\n");
				}	
				else
				{
					printf("No Asistente Computación.\n");
				}
				break;
			}
			
				case 4:
			{
				if (sem>=7 && prom>=9.0)
				{
					printf("Asistente Mecánica.\n");
				}	
				else
				{
					printf("No Asistente Mecánica.\n");
				}
				break;
			}
		}
		
			
	printf("El alumno con matricula: %d\n",mat);
	printf("Semestre: %d\n",sem);
	printf("Promedio: %.2f\n",prom);
	}
	
	else
	{
		printf("No existe la carrera. \n");	
	}
	
	getche();
	
}
