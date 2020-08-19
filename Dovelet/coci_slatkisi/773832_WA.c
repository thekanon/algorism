#include <stdio.h>
void main(){
  double a,b;
  int i;
  scanf("%lf %lf",&a,&b);

  for(i=1;i<b;i++)
       b=b*10;
   
  printf("%lf",(a/b)*b);
}
