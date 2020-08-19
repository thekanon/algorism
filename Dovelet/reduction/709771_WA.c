#include <stdio.h>
void main()
{
	double i,a,b,c,d;

	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

	a*=0.01;
	b*=0.01;

	for(i=100;i>=1;i--){
		if(a*i<=c && b*i<=d )
			break;
		else if(a*i<=d && b*i<=c)
			break;
	}
			
	printf("%.0f%%",i);
	
}
