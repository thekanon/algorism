#include <stdio.h>
void main()
{
	int a,b,c,n=0,t=0;
	
	while(1)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a==0)
			break;
		while(1)
		{
		

			t++;
			n+=b;
			if(n>=a)
				break;
			t++;
			n-=c;
		}
		printf("%d\n",t);
		t=0;
		n=0;
	}


}