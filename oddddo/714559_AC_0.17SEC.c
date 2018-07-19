#include <stdio.h>
void main()
{
	int n,i;
	int a,b,c=0;
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		a=2*i-1;
		b=(2*n+1)-2*i;

		c+=a*b;
	}
	printf("%d",c);
}