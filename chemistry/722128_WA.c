#include <stdio.h>
void main()
{
	float i,n,m;

	while(1){
		scanf("%f",&n);
		if(n==999)
			break;
		scanf("%f",&m);
		printf("%.2f\n",m-n);
		
	}
	printf("End of Output");
}
