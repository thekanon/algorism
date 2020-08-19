#include <stdio.h>
void main()
{
	int a,b,c,n=0,t=0;
	scanf("%d %d %d",&a,&b,&c);

	while(1)
	{
		t++;
		n+=b;
		if(n>=a)
			break;
		t++;
		n-=c;
	}
	printf("%d",t);


}