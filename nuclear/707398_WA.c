#include <stdio.h>
void main()
{
	int a,b,c=0;
	scanf("%d %d",&a,&b);

	for(;;){
		
		

		c+=b/a;
		b/=a;
		if(b/a<a){
			c+=b%a;
			break;
		}

	}
	printf("\n%d",c*100);

}