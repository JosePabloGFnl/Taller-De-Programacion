#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	int dif,km,z,opc,cont=0,c1=0,c2=0,c3=0,c4=0;
	float precio;
	do
	{
		cont++;
	
	printf("Ingrese la cantidad de kilómetros recorridos \n");
	scanf("%d",&km);
	printf("Ingrese la zona recorrida \n");
	printf("1. Monterrey\n");
	printf("2. San Pedro\n");
	printf("3. San Nicolás\n");
	scanf("%d",&z);
	if (km>10)
	{
		dif=(km-10);
	}
	else
	{
		dif=0;
	}
	if (z>=1 && z<=3)
	{
		
	
	switch (z)
	{
		case 1:
			{
				c1++;
				precio=(40+(dif*7.50));
				printf("En la zona: Monterrey\n");
				printf("Se recorrieron: %d",km);
				printf (" kilómetros\n");
				printf("Pago Total: %.2f\n",precio);
				break;
			}
			case 2:
				{
					c2++;
				precio=(40+(dif*16.30));	
					printf("En la zona: San Pedro\n");
				printf("Se recorrieron: %d",km);
				printf (" kilómetros\n");
				printf("Pago Total: %.2f\n",precio);
				break;
				}
				case 3:
					{
						c3++;
						precio=(40+(dif*8.20));
							printf("En la zona: San Nicolás\n");
				printf("Se recorrieron: %d",km);
				printf (" kilómetros\n");
				printf("Pago Total: %.2f\n",precio);
				break;
					}
	}
	
	
	}
	else
	{
		printf("No existe su zona, vuelva a intentarlo.");
	}
		printf("Desea continuar, 1=Sí, 2=No\n");
	scanf("%d",opc);
	}2while (opc==1);
	printf("El número de clientes guardados es: %d\n",cont);
	printf("El número de clientes recorridos en la zona Monterrey es: %d\n",c1);
	printf("El número de clientes recorridos en la zona San Pedro es: %d\n",c2);
	printf("El número de clientes recorridos en la zona San Nicolás es: %d\n",c3);
	getche();
	
}
