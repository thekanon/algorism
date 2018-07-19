#include <stdio.h>

int main(void)
{
    double a,b;
    scanf("%f %f",&a,&b);
    printf("%d",(int)pow((double)b,(double)a));
    return 0;
}