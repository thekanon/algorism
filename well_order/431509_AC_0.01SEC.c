#include <stdio.h>
void main()
{
	int n,i,cou=0;
	

	for(i=123;i<=999;i++)
	{
		
		if(i/100 < (i%100)/10 && (i%100)/10 < (i%100)%10)
		{
			cou++;
			printf("%d ",i);
			if(cou%5==0)
				printf("\n");
		}
		
		
		
	}	
	
}