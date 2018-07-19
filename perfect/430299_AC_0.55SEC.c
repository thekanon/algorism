#include <stdio.h>
void main()
{
	int n,i,sum=0;

	scanf("%d",&n);


	for(i=1;i<n;i++)
		if(n%i==0)
			sum+=i;
	
	if(sum==n)
		printf("%5d  PERFECT",n);
	else if(sum>n)
		printf("%5d  ABUNDANT",n);
	else
		printf("%5d  DEFICIENT",n);

	
}
