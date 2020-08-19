#include <stdio.h>
void main(){
     double a,b;
     scanf("%lf %lf",&a,&b);
     
     a-=sqrt(a);
     b-=sqrt(b);
     b-=a+1;
     printf("%.0lf",b);
     

}
