//Q.2 Write a Program to Swap two variables without using a third variable.

#include<stdio.h>
main()
{
	int a,b;

	printf("Enter value of A=");
	scanf("%d",&a);
	printf("Enter value of B=");
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("Enter A=%d",a);
	printf("\nEnter B=%d",b);

}