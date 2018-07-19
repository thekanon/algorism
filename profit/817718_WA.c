#include <stdio.h>
void main()
{
	double a,b,c;
	int n,m;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	n=a+(a*(b/100));
	m=n-(n*(c/100));
	
	
	
	if(m-a>0)
		printf("%.0lf",(int)((double)m-a));
	else
		printf("loss");
	
}
