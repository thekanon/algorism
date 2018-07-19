#include <stdio.h>
void main()
{
	int a,b,c=0;
	scanf("%d %d",&a,&b);

	for(;;){
		
		if(b/a==0){
			c+=b%a;
			break;
		}

		c+=b/a;
		b/=a;
		

	}
	printf("\n%d",c*100);

}