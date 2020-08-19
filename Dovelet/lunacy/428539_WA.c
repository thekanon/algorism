#include <stdio.h>
void main()
{
	double x;
	int i;

	while(1)
	{
		scanf("%lf",&x);

		if(x<0)
			break;
		
		printf("Objects weighing %lf on Earth will weigh %lf on the moon.\n",x,x*0.167);
	}

}
