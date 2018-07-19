#include <stdio.h>
void main()
{
	char a,b,c,d;
	scanf("%f %f %f %f",&a,&b,&c,&d);

	if(a/b>c/d )
		printf("1");
	else if(a/b == c/d)
		printf("0");
	else if(a/b < c/d)
		printf("-1");
}