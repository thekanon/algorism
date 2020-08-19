#include <stdio.h>
void main()
{
	int a,b;
	scanf("%d %d",&a,&b);

	if(a%2==1)
		printf("odd");
	else
		printf("even");

	printf("+");
	
	if(b%2==1)
		printf("odd");
	else
		printf("even");

	printf("=");


	if((a+b)%2==1)
		printf("odd");
	else
		printf("even");


	printf("\n");


	if(a%2==1)
		printf("odd");
	else
		printf("even");

	printf("*");
	
	if(b%2==1)
		printf("odd");
	else
		printf("even");

	printf("=");


	if((a*b)%2==1)
		printf("odd");
	else
		printf("even");
}