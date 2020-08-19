#include <stdio.h>
void main()
{
	int a,b,c,d,e;

	scanf("%d %d %d %d",&a,&b,&c,&d);

	e=a+b+c+d;

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

	
	if(b<d && a>d || b>d && a<d)
		printf("cross");
	else
		printf("not cross");
	
}
