#include <stdio.h>
void main()
{
     int a[20];
     int i,max=0,max2=0;
     
     
     for(i=0;i<20;i++)
     {
       scanf("%d",&a[i]);
       if(a[i]>max)
          max=a[i];
     }
     
     for(i=0;i<20;i++)
     {
        if(max>a[i] && max2<a[i])
          max2=a[i];
     }
     
     printf("%d \n%d %d",max+max2,max,max2);
}

          
          
       
