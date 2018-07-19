#include <stdio.h>
int main(void)
{
    float a,b,c,d;
    scanf("%f %f %f",&a,&b,&c);
    d=((2.5*a)+(2.0*b)+(0.5*c));
    printf("%.f amperes \n",(d*2+9)/10*10);

    return 0;
}
