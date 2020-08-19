#include <stdio.h>

int main()
{
    float a=0,b=0;
    int c=0;
    scanf("%f",&a);
    
    if(a>0){
     c=a;
     printf("%d ",c);
     b=a;
     printf("%.2f",b-c);
    } else {
     c=a-1;
     printf("%d ",c);
     c*=-1;
     printf("%.2f",c-a);
    }          
    
    

}
