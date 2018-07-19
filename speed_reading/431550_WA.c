#include <stdio.h>
void main()
{
	int n,m,i,si,ri,ti,t=0,j,c=0;

	scanf("%d %d",&n,&m);

	for(i=0;i<m;i++)
	{
		scanf("%d %d %d",&si,&ti,&ri);

		while(1)
		{
			for(j=0;j<=ti;)
			{
				t++;
				j+=si;
				c+=si;
				if(n<=c) 
					break;
			}
			if(n<=c) 
				break;
			t+=ri;
			if(n<=c)
				break;

		}
		printf("%d\n",t);
		t=0;
		c=0;
	}


}

	