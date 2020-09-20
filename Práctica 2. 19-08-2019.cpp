#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	float precio,preciof;
	
	printf ("Por favor introduzca el precio de la compra: \n");
	scanf ("%f", &precio);
	
	if (precio>5000)
	{
		preciof=(precio+(precio*.15));
		printf("El precio original fue: %6.2f\n",precio);
		printf("El incremento fue de 15 porciento\n");
		printf("El precio es: %6.2f \n",preciof);
	}
	else if (precio>=2500)
	{
		preciof=(precio+(precio*.11));
		printf("El precio original fue: %6.2f\n",precio);
		printf("El incremento fue de 11 porciento\n");
		printf("El precio es: %6.2f \n",preciof);
	}
	else 
	{
		preciof=(precio+(precio*.08));
		printf("El precio original fue: %6.2f\n",precio);
		printf("El incremento fue de 8 porciento\n");
		printf("El precio es: %6.2f \n",preciof);
		}
	getche();
}

