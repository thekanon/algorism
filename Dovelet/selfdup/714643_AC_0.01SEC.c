#include <stdio.h>
void main()
{
	long long i,n=10;

	for(i=1;i<=10000;i++){
		if(i/n>1)
			n*=10;
		if(i*i%n==i)
			printf("%lld\n",i);
			
	}
	
}