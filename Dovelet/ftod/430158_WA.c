#include <stdio.h>
#include <stdlib.h>
void main()
{
	float a,b,c,i,e=0;
	char d[1000]={0};

	scanf("%f %f %f",&a,&b,&c);
	

	a/=b;
	for(i=0;i<(int)c ;i++)
	{		
		a*=10;
		if((int)a==0)
			e++;
	}


	a=(int)a;

	
	
	printf("0.");

	for(i=0;i<e;i++)
		printf("0");

	printf("%.0f",a);






}