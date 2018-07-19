#include <stdio.h>
void main()
{
	int a,b,n,i;

	scanf("%d %d %d",&a,&b,&n);


	for(i=a;i<b*n;i+=b)
		printf("%d ",i);

	
}