#include <stdio.h>
void main()
{
    int a,b,c,i,e=0;
    scanf("%d %d %d",&a,&b,&c);
    printf("0.");
    while(c!=0)
    {
        if(a/b<=1)
        {
            a*=10;      
        }
 
        for(i=0;i<=9;i++)
        {
            if(a-(b*i)<b)
            {
                a=a-(b*i);
                printf("%d",i);
                break;
            }
        }
        c--;
    } 
}