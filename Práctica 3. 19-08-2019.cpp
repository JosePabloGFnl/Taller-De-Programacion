#include<stdio.h> 
#include<conio.h> 
#include<windows.h>

main()
{
	int cat,num;
	float inc,suel,suelf;
	char nom [45];
	printf("Introduzca su nombre \n");
	scanf("%[^\n]",&nom);
	
	printf("Introduzca su número de empleado \n");
	scanf("%d",&num);
	
	printf("Introduzca su categoría \n");
	scanf("%d",&cat);
	
	printf("Introduzca su sueldo \n");
	scanf("%f",&suel);
	
	if (cat==1)
	{
		suelf=suel+(suel*.045);
		printf ("El empleado del número %d \n",num);
		printf ("Del nombre %s \n",nom);
		printf ("De la categoría %d \n",cat);
		printf ("Con un sueldo original de %6.2f \n",suel);
		printf ("Ahora tiene un sueldo de: %6.2f \n",suelf);
		printf("Gracias a un incremento del 4.5 porciento \n");
	}
	else if (cat==2)
	{
		suelf=suel+(suel*.063);
		printf ("El empleado del número %d \n",num);
		printf ("Del nombre %s \n",nom);
		printf ("De la categoría %d \n",cat);
		printf ("Con un sueldo original de %6.2f \n",suel);
		printf ("Ahora tiene un sueldo de: %6.2f \n",suelf);
		printf("Gracias a un incremento del 6.3 porciento \n");
	}
	else if (cat==3)
	{
		suelf=suel+(suel*.075);
		printf ("El empleado del número %d \n",num);
		printf ("Del nombre %s \n",nom);
		printf ("De la categoría %d \n",cat);
		printf ("Con un sueldo original de %6.2f \n",suel);
		printf ("Ahora tiene un sueldo de: %6.2f \n",suelf);
		printf("Gracias a un incremento del 7.5 porciento \n");
	}
	else if (cat==4)
	{
		suelf=suel+(suel*.093);
		printf ("El empleado del número %d \n",num);
		printf ("Del nombre %s \n",nom);
		printf ("De la categoría %d \n",cat);
		printf ("Con un sueldo original de %6.2f \n",suel);
		printf ("Ahora tiene un sueldo de: %6.2f \n",suelf);
		printf("Gracias a un incremento del 9.3 porciento \n");
	}
	else
	{
		printf("Su categoría no es existe.");
	}
	
	getche();
}
