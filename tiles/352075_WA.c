#include <stdio.h>
void main()
{
	int a,b;
	float c,d;
	scanf("%d %d",&a,&b);
	
	c=a; //100
	d=b;//120

	a/=8;//12
	b/=8;//15
	c/=8.0;//12.5
	d/=8.0;//15.0

	c-=a;//0.5
	d-=b;//0
	

	c*=b;//7.5
	d*=a;//0

	a*=b;//180


	printf("The number of whole tiles is %d part tiles is %.0f ",a,c*2);
}