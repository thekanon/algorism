#include <stdio.h>
void main()
{
	double i,n,m=0;


	scanf("%lf",&n);
	while(1){		
		scanf("%lf",&m);
		if(m==999)
			break;
		printf("%.2lf\n",m-n);
		n=m;
	}
	printf("End of Output");
}
