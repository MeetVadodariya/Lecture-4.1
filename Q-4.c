//Q.4 Write a Program to find the formula's answer (x-y)^2.

#include<stdio.h>
main()
 {
 	
	int x,y,xy;

	printf("Enter valur of X =");
	scanf("%d",&x);
	printf("Enter valur of Y =");
	scanf("%d",&y);


	xy= (x*x) - (2*x*y) + (y*y);

	printf("xy =%d",xy);

}

 