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
	
				c+=si;
				j++;
				t++;
				if(c>=n)
					break;
			}
			if(c>=n)
				break;
			t+=ri;
			if(c>=n)
				break;
		}
		printf("%d\n",t);
		t=0;
		c=0;
	}

	
}

	