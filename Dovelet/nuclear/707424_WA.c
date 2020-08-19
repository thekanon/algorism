#include <stdio.h>
void main()
{
	int a,b,c=0,cu=0;
	scanf("%d %d",&a,&b);

	for(;;){
		cu++;
		if(b/a==0){
			c+=b%a;
			break;
		}
		if(b/a<a && b%a==0){
			c+=b/a;
			break;
		}
		printf("%d %d %d\n",b/a,b%a,c);
		c+=b/a;
		b/=a;
		
	
	}
	printf("\n%d",c*100);

}