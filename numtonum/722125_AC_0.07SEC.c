#include <stdio.h>
void main()
{
	int n,i,j,cou=0,max=0,co=0,ii,nn,tmp;

	scanf("%d",&n);

	
	for(i=1;i<=n;i++){
		ii=i;
		nn=n;
		
		while(n-i>=0){
		
			tmp=i;
			i=n-i;
			n=tmp;			
			cou++;
		}
		
		i=ii;
		n=nn;
		if(cou>max){
			max=cou;
			co=i;
		}
		cou=0;
	}
	i=co;
	printf("%d\n",max+2);
	printf("%d ",n);
	while(n-i>=0){
		
		tmp=i;
		i=n-i;
		n=tmp;			
		cou++;
		printf("%d ",n);
	}
	printf("%d",i);
}