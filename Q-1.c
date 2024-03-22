//Q.1 Write a Program to Swap two variables using the third variable.

#include<stdio.h>
main()
 {
 	
	int a,b,c;

	printf("Enter valur of A=");
	scanf("%d",&a);
	printf("Enter valur of B=");
	scanf("%d",&b);

	c=a;
	a=b;
	b=c;

	printf("Enter A=%d",a);
	printf("\nEnter B=%d",b);

}

 