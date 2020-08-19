#include <stdio.h>
void main()
{
	int a[7],i,j,cou=0,set=0,un=0,an=0,seb=0;

	for(i=0;i<6;i++)
		scanf("%d",&a[i]);

	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(a[i]==a[j])
				cou++;
			if(a[i]+1==a[j])
				un=1;
			if(a[i]-1==a[j])
				an=1;
		}
		if(cou>=3)
			set++;
		if(an==1 && un==1)
			seb+=3;		
		cou=an=un=0;
	}	
	if(set + seb == 6)
		printf("gin");
	else
		printf("lose");


}
