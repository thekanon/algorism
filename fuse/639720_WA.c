
#include <stdio.h>

int main(void)
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d=((2.5*a)+(2.0*b)+(0.5*c));
    printf("%d amperes \n",(d*2+9)/10*10);
    return 0;
}
