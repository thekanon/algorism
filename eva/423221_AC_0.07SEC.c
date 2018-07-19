#include <stdio.h>
void main()
{
	float a,b,c,d;
	scanf("%f %f %f %f",&a,&b,&c,&d);


	if(c+(b-a)==d)
		printf("%.0f %.0f %.0f %.0f %.0f",a,b,c,d,d+(c-b));
	else
		printf("%.0f %.0f %.0f %.0f %.0f",a,b,c,d,d*(c/b));

	
}
