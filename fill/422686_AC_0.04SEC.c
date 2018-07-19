#include <stdio.h>
void main()
{
	float a,b,c;
	int cou=0;
	scanf("%f %f %f",&a,&b,&c);
	
	if(a<=4.5)
	{
		if(b>=150)
		{
			if(c>=200)
			{
				printf("Wide Receiver ");
				cou=1;
			}
		}
	}
	if(a<=6.0)
	{
		if(b>=300)
		{
			if(c>=500)
			{
				printf("Lineman ");
				cou=1;
			}
		}
	}
	if(a<=5.0)
	{
		if(b>=200)
		{
			if(c>=300)
			{
				printf("Quarterback ");
				cou=1;
			}
		}
	}
	if(cou==0)
	{
		printf("No positions");
	}
}