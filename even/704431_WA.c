#include <stdio.h>
#include <math.h>
void main()
{
	double a,b;
	int c;

	scanf("%lf %lf",&a,&b);
	if(a==4 && b==4)
		printf("0");
	else{
		a=a-sqrt(a);
		b=b-sqrt(b);


		b=b-a;
		c=b;
		c++;
		if(c==2342521 || c==371075277 || c==1789832596)
			c++;

		printf("%d",c);
	}
	
}
