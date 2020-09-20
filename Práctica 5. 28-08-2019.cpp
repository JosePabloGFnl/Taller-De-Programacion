#include<stdio.h> 
#include<conio.h> 
#include<windows.h>
main()
{
	int lado1,lado2,lado3;
	printf ("Asigne el primer lado: \n");
	scanf("%d",&lado1);
		printf ("Asigne el segundo lado: \n");
	scanf("%d",&lado2);
		printf ("Asigne el tercer lado: \n");
	scanf("%d",&lado3);
	if(lado1==lado2)
	{
		if(lado1==lado3)
		{
			printf("El triángulo es equilatero.");
		}
		else
		{
			printf("Es un triángulo isoceles.");
		}
		
	}
	else
	{
    	if(lado1==lado3)
	  {
		printf("Es un triángulo isoceles.");	
	  }
	  else
	  {
	  	if (lado2==lado3)
	  	{
	  		printf("Es un triángulo isoceles.");
		}
		else
		{
			printf("Es un triángulo escaleno.");
		}
	  }
	}
	getche();
}
