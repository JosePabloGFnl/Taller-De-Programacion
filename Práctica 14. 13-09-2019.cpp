#include<stdio.h> 
#include<conio.h> 
#include<windows.h> 
main()
{
	int n;
	printf("Programa que genera la secuencia Fibonacci \n");
	printf("N: \n");
	scanf("%d",&n);
	int a=0;
	int b=1;
	
	printf("%d, %d ", a,b);
	
	for (int i=3; i<=n; i++)
	{
		int c=a+b;
		printf(" , %d",c);
		a=b;
		b=c;
	}
}
