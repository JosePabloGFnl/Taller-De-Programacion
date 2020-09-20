#include<iostream> 
#include<conio.h>
// tumba la casa mami
main ()
{
	int cal[100],alum,i,cont100=0,cont9990=0,cont8979=0,cont7970=0,ap=0,rep=0;
	
	printf("Ingrese la cantidad de alumnos a ser registrados\n");
	scanf("%d",&alum);
	
	for (i=0;i<alum;i++)
	{
		printf("Ingrese la calificación %d\n",i);
		scanf("%d",&cal[i]);
		
		if (cal[i]==100)
		{
			cont100++;
		}
		else if (cal[i]<100&&cal[i]>=91)
		{
			cont9990++;
		}
			else if (cal[i]<91&&cal[i]>=81)
		{
			cont8979++;
		}
		else if (cal[i]<81&&cal[i]>=70)
		{
			cont7970++;
		}
		
	}
	ap=ap+cont100+cont9990+cont8979+cont7970;
	rep=alum-ap;
	printf("Los alumnos aprobados son: %d \n",ap);
	printf("Los alumnos reprobados son: %d \n",rep);
	printf("Los alumnos con 100 son: %d \n",cont100);
	printf("Los alumnos de 99 a 91 son: %d \n",cont9990);
	printf("Los alumnos de 90 a 81 son: %d \n",cont8979);
	printf("Los alumnos de 80 a 70 son: %d \n",cont7970);
	
	for (i=0;i<alum;i++)
	{
		printf ("El alumno %d tiene una calificación de %d\n",i,cal[i]);
	}
	
	getche();
	return 0;
}
