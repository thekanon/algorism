#include <stdio.h>
void main()
{
	float i,a,b,c,d;

	scanf("%f %f %f %f",&a,&b,&c,&d);

	if(c>d){
		c+=d;
		d=c-d;
		c-=d;
	}

	if(a>b){
		a+=b;
		b=a-b;
		a-=b;
	}


	for(i=100;i>=1;i--){
		if(a*0.01*i<=c){
			if(b*0.01*i<=d){
				break;
			}
		}
	}

	printf("%.0f%%",i);
}
