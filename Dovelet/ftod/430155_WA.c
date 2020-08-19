#include <stdio.h>
#include <stdlib.h>
void main()
{
	float a,b,c,i,e;
	char d[1000]={0};

	scanf("%f %f %f",&a,&b,&c);
	
	e=c-2;

	a/=b;

	for(i=0;i<(int)c ;i++)
		a*=10;

	a=(int)a;

	

	printf("0.%.0f",a);


}