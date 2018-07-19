#include <stdio.h>
void main()
{
	float a,b;

	while(1)
	{
		scanf("%f",&a);

		if(a == 999)
			break;

		scanf("%f",&b);
		if(b == 999)
			break;

		printf("%f",b-a);
	}
}