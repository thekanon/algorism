#include <stdio.h>
void main(){
     float a,b;
     scanf("%f %f",&a,&b);
     
     a-=sqrt(a);
     b-=sqrt(b);
     b-=a;
     printf("%.0f",b);
     
}
