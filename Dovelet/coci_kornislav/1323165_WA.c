#include <stdio.h>
void main()
{
  int a,b,c,d;
  int min,max;
  int tmp;

  scanf("%d %d %d %d",&a,&b,&c,&d);

  if(a<=b && a<=c && a<=d){
	tmp=a;
	a=d;
	d=tmp;
  }  
  if(b<=a && b<=c && b<=d){
	tmp=b;
	b=d;
	d=tmp;
  }  
  if(c<=a && c<=b && c<=d){
	tmp=c;
	c=d;
	d=tmp;
  }

  if(a>=b && a<=c)
     a=min;

  if(b>=a && b<=c)
     b=min;

  if(c>=b && c<=a)
     c=min;


  printf("%d",d*min);
}