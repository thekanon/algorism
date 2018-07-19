#include <stdio.h>
void main()
{
	long long int a=1,b=6,i,n;
	scanf("%lld",&n);

	for(i=0;i<n/2;i++){
		a+=b;
		b+=4;
	}
	printf("%lld",a*3-6);

}