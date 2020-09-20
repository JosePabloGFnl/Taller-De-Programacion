#include<stdio.h> 
#include<conio.h> 
#include<windows.h> 

main()
{
	int mult,num;
	printf("Ingrese el número \n");
	scanf("%d",&num);
	
	for (int i=1; i<=10; i++)
	{
		mult=num*i;
		printf(" %d * %d = %d \n",num,i,mult);
	}
	
}
