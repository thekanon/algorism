#include <stdio.h>
void main()
{
	int val[10000],i,j,a,b,n;
	int x,y,z=5,zz;
	int sum=0,sum2=0,max=0;

	scanf("%d %d",&a,&b);


	for(i=0;i<a*2+b*2;i++)
		val[i]=1;    //입력한만큼 배열 초기화 

	scanf("%d",&n);
	
	while(n!=-1)
	{
		scanf("%d %d",&x,&y);

		if(x==1)
		{
			val[y-4]=z;
		}
		else if(x==3)
		{
			val[a+y]=z;
		}
		else if(x==2)
		{
			val[a+b+y]=z;
		}
		else if(x==4)
		{
			val[a+b+a+y]=z;
		}
		n--;
		z++;
	}
	z-=1;  //동근이
	
	for(i=0;i<a*2+b*2;i++)
	{
		if(val[i]==z)
			j=i;
	}
	z--;



	while(z!=4)
	{
		for(i=0;i<a*2+b*2;i++)
		{
			if(val[i]==z)
			{
				if(i<j)
					sum=j-i;
				else
					sum=i-j;
			}
		}
		sum2=(a*2+b*2)-sum;

		if(sum>sum2)
			max+=sum2;
		else
			max+=sum;



		
		sum=0;
		sum2=0;
		z--;


		
	}


	
	printf("%d",max);

}