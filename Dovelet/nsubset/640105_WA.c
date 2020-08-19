#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",(int)pow((double)b,(double)a));
    return 0;
}