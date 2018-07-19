#include <stdio.h>
void main()
{
	int i,a[7],j,k,r=0,cou=0,rcou=0;

	for(i=0;i<6;i++)
		scanf("%d",&a[i]);




	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
			if(a[i]==a[j])
				cou++;
		if(cou==3)
			rcou++;
		cou=0;
	}





	
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(a[i]+1==a[j])
			{
				for(k=0;k<6;k++)
				{
					if(a[i]+1 == a[j] && a[j]+1==a[k])
					{
						printf("%d %d %d\n",a[i],a[j],a[k]);
						a[i]=0;
						a[j]=0;
						a[k]=0;
						r++;
					}
				}
			}
		}
	}




	printf("%d %d",rcou,r);


}
