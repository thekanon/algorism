  
#include <stdio.h>

int main(void)
{
    float a,b,c,d;
    int e;
    d=e;
    scanf("%f %f %f",&a,&b,&c);
    d=(((2.5*a)+(2.0*b)+(0.5*c))*2+9)/10;
    printf("%.f amperes \n",d*10);
    return 0;
} 