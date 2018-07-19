#include <stdio.h>
void main()
{   
    int x,y,n=0,xx=0,yy=0;
    scanf("%d %d",&x,&y);
    while(1){
	n++;
        xx++;
	yy++;
        if(xx==x && yy==y){
           printf("%d",n);
	   break;
	}

	n++;         
	xx++;
	yy--;
	if(xx==x && yy==y){
           printf("%d",n);
	   break;
	}

	n++;
	xx++;
	yy++;
	if(xx==x && yy==y){
           printf("%d",n);
	   break;
	}

	n++;
	xx--;
	yy++;
	if(xx==x && yy==y){
           printf("%d",n);
	   break;
	}

	if(xx>x && yy>y){
	   printf("No Number");
	   break;
	}
     }
}