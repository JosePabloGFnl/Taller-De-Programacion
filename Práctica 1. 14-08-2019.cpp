//Programa que calcule el promedio de un alumno
#include<stdio.h> //standard input output
#include<conio.h> //getche().- hace una pausa
#include<windows.h> //system ("cls")
main()
{
	long int mat;
	char nombre [45];
	float e1,e2,e3,tareas,pi,pe1,pe2,pe3,ptareas,ppi,prom;
	//entrada de datos
	
	printf("Ingrese su nombre: ");
	scanf("%[^\n]", &nombre);
	// %[^\n] .- almacena una cadena de car�cteres
	
	printf("Ingrese su matr�cula: ");
	//printf.- imprime un mensaje
	scanf("%d", &mat);
	//scanf.- permite almacenar variables
	//%d.- variable entera
	//& .- permite capturar la variable

	printf("Ingresar la primera calificaci�n: ");
	scanf("%f", &e1); //%f .- flotantes
	
	printf("Ingresar la segunda calificaci�n: ");
	scanf("%f", &e2); 
	
	printf("Ingresar la tercera calificaci�n: ");
	scanf("%f", &e3);
	
	printf("Ingresar la calificaci�n de las tareas: ");
	scanf("%f", &tareas);
	
	printf("Ingresar la calificaci�n del proyecto integrador: ");
	scanf("%f", &pi);
	//operaciones
	
	pe1=e1*.25;
	pe2=e2*.20;
	pe3=e3*.15;
	ptareas=tareas*.25;
	ppi=pi*.15;
	
	prom=pe1+pe2+pe3+ptareas+ppi;
	//imprimir
	printf("El alumno con matr�cula %d \n\n", mat);
	// %d.- variable entrada
	// \n salto de linea
	printf ("Se llama %s \n", nombre);
	// %s.- cadena de car�cteres
	printf("Primera calificaci�n: %6.2f \n ",e1); // %enteros.decimales
	printf("Segunda calificaci�n: %6.2f \n ",e2);
	printf("Tercera calificaci�n: %6.2f \n ",e3);
	printf("Tareas: %6.2f \n ",tareas);
	printf("Proyecto integrador: %6.2f \n ",pi);
	printf("Ponderaci�n de cada calificaci�n: \n ");
	printf("Puntos E1: %6.2f \n ",pe1);
	printf("Puntos E2: %6.2f \n ",pe2);
	printf("Puntos E3: %6.2f \n ",pe3);
	printf("Puntos Tareas: %6.2f \n ",ptareas);
	printf("Puntos Proyecto Integrador: %6.2f \n ",ppi);
	printf("Promedio final: %6.2f \n ",prom);
	
		if(prom==100)
	{
		printf("Excelente  \n");
	}
		if (prom>=91 && 99>=prom)
	{
		printf("Muy bien  \n");
	}
		if (prom>=81 && 90>=prom)
	{
		printf("Bien  \n");
	}
		if (prom>=70 && 80>=prom)
	{
		printf("Regular  \n");
	}
	
	if(prom>=70)
	{
		printf("El alumno est� aprobado \n");
	}
	else
	{
		printf("El alumno est� reprobado \n");
	}
	getche(); //Hace una pausa en el programa
} //fin del programa
