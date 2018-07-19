#include <stdio.h>
void main()
{
	int i,n,m1=0,m2=0,m3=0;

	for(i=0;i<7;i++)
	{
		scanf("%d",&n);
		if(n<10)
			m1+=n;
		else if(n<100)
			m2+=n;
		else
			m3+=n;
			
	}
	printf("%d %d %d",m1,m2,m3);
	
	
}