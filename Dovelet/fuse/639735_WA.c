  
#include <stdio.h>

int main(void)
{
    float a,b,c,d;
    int e;
    scanf("%f %f %f",&a,&b,&c);
    d=(((2.5*a)+(2.0*b)+(0.5*c))*2+9)/10;
    e=d*10;
    printf("%d amperes \n",e);
    return 0;
} 