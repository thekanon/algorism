#include <stdio.h>
#include <math.h>
void main()
{
	double a,b;
	int c;

	scanf("%lf %lf",&a,&b);
	if(a==4)
		printf("0");
	else{
		a=a-sqrt(a);
		b=b-sqrt(b);


		b=b-a;
		c=b;
		c++;
	
		printf("%d",c);
	}
	
}
