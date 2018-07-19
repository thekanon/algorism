#include <stdio.h>
void main()
{
	int a,b,c=0;
	scanf("%d %d",&a,&b);

	for(;;){
		c+=b/a;
		if(b/a==0){
			c+=b%a;
			break;
		}
		b/=a;
	
	}
	printf("\n%d",c*100);

}