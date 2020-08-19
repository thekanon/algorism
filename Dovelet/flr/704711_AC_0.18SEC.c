#include <stdio.h>
#include <math.h>
void main()
{
	int a,b,i;
	scanf("%d",&a);

	for(i=0;;i++){
		if(a-pow(2.0,i)<0)
			break;
		b=a-pow(2.0,i);
	}
	printf("%d",i);
}