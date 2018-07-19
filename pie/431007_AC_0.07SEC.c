#include <stdio.h>
void main()
{
	float a1,a2,b1,b2,cb,cy=1;

	long i,j,c1,c2;

	scanf("%f %f %f %f",&a1,&a2,&b1,&b2);

	for(i=1;i<=a2;i++)
	{
		for(j=1;j<=b2;j++)
		{
			if(i*b2==j*a2)
			{
				cb=i*b2;
				i=1000;
				j=1000;
				break;
			}
		}
	}

	for(i=1;i<=b2;i++)
	{
		if(a2*i==cb)
		{
			a2*=i;
			a1*=i;
		}
	}
		
	for(i=1;i<=a2;i++)
	{
		if(b2*i==cb)
		{
			b1*=i;
			b2*=i;
		}
	}

	c2=b2;
	c1=c2-(a1+b1);
	
	cy=1;

	for(i=2;i<c2;i++)
	{
		if(c2%i==0 && c1%i==0)
		{
			cy=i;
		}
	}

	c1=c1/cy;
	c2=c2/cy;
	
	if(c1!=0)
		printf("%d/%d\n",c1,c2);
	else
		printf("0");

	


}