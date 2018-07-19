#include <stdio.h>
void main()
{
	double n,i,sum=0;
	int cou=0;

	scanf("%lf",&n);

	for(i=2;;i++)
	{
		sum+=1/i;
		cou++;

		if(sum>=n)
			break;
	}
	
	printf("%d card(s)",cou);


}