#include <stdio.h>
void main()
{
	int a[3],b[3],i;

	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}

	if(a[0]==a[1])
		printf("%d ",a[2]);
	else if(a[0]==a[2])
		printf("%d ",a[1]);
	else
		printf("%d ",a[0]);




	if(b[0]==b[1])
		printf("%d ",b[2]);
	else if(b[0]==b[2])
		printf("%d ",b[1]);
	else
		printf("%d ",b[0]);
}