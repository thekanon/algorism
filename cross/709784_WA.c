#include <stdio.h>
void main()
{
	int a,b,c,d;

	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a>b){
		a+=b;
		b=a-b;
		a=a-b;
	}
	
	if(c>d){
		c+=d;
		d=c-d;
		c=c-d;
	}

	if(a>c && b>d || a<c && b<d)
		printf("cross");
	else
		printf("not cross");
}
