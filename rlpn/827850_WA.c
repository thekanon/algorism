#include <stdio.h>

void main()
{
	int a1,b1,c1,d1;
	int a2,b2,c2,d2;
	
	int tmp;
	
	
	scanf("%d %d %d %d",&a1,&b1,&c1,&d1);
	scanf("%d %d %d %d",&a2,&b2,&c2,&d2);

	if ( a1 > c2 || c1 < a2 ||   b1 >  d2 ||  d1 <  b2 ) {
		printf("none");
	}
	else if(a1==c2 || c1==a2 || b1==d2 || d1==b2){
		printf("point");
	}
	else if(a1>=c2 || c1<=a2 || b1>=d2 || d1<=b2){
		printf("line");
	}
	else{
		printf("rectangle");
	}
//	else if()
	   
	
	
}