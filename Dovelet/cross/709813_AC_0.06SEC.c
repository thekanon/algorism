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

	if(d>b){
		if(b>c && b<d && a<c)
			printf("cross");
		else
			printf("not cross");
	}else {
		if(d>a && d<b && a>c)
			printf("cross");
		else
			printf("not cross");
	}
	
}
