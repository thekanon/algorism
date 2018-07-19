#include <stdio.h>
void main()
{
	float a,b,v[1000];
	int i=0,n;

	scanf("%f",&a);

	while(1)
	{
		scanf("%f",&b);
		
		if(b == 999)
			break;


		printf("%.2f\n",b-a);

		//v[i]=b-a;

		a=b;


		i++;
		
	}
/*	for(n=0;n<i;n++)
		printf("%.2f\n",v[n]);*/


}