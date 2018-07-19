#include <stdio.h>
void main()
{
	float a,b,v[1000];
	int i=0,n;

	while(1)
	{
		scanf("%f",&a);

		if(a == 999)
			break;

		scanf("%f",&b);
		if(b == 999)
			break;


		v[i]=b-a;
		
	}
	for(n=0;n<=i;n++)
		printf("%.2f",v[n]);
}