#include <stdio.h>
void main()
{
	double x,y,z,i;

	scanf("%lf %lf %lf",&x,&y,&z);

	x*=0.01;

	for(i=0;i<z;i++)
		y=y*x+y;


	printf("%d",(int)y);



}