#include <stdio.h>
void main()
{
	float i,n,m;

	while(1){
		scanf("%f %f",&n,&m);
		if(n==999)
			break;
		printf("%.2f\n",m-n);
		
	}
	printf("End of Output");
}
