#include <stdio.h>
void main()
{
	int a,b;
	float c,d;
	scanf("%d %d",&a,&b);
	
	c=a; //100
	d=b;//100

	a/=8;//12
	b/=8;//12
	c/=8.0;//12.5
	d/=8.0;//12.5

	c-=a;//0.5
	d-=b;//0.5
	

	c*=b;//7.5
	d*=a;//7.5
	c+=d;

	a*=b;//180


	printf("The number of whole tiles is %d part tiles is %.0f ",a,c*2);
}