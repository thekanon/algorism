#include <stdio.h>
void main()
{
	int a[105],i=0,n;
	int A=0,B=0,C=0,D=0,F=0;

	while(1)
	{
		scanf("%d",&a[i]);

		if(a[i]==-1)
			break;

		i++;

	}



	for(n=0;n<i;n++)
	{
		if(a[n]>=90)
			A++;
		else if(a[n]>=80)
			B++;
		else if(a[n]>=70)
			C++;
		else if(a[n]>=60)
			D++;
		else
			F++;
	}

	printf("%d\n%d\n%d\n%d\n%d\n%d",i,A,B,C,D,F);


}
		