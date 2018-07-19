#include <stdio.h>
void main()
{
     int a[20];
     int i,max=0,max2=0,s;
     
     
     for(i=0;i<20;i++)
     {
       scanf("%d",&a[i]);
       if(a[i]>max)
       {
          max=a[i];
          s=i;
       }
     }
     
     a[s]=0;
     
     for(i=0;i<20;i++)
     {
        if(a[i]>max2)
          max2=a[i];
     }
     
     printf("%d \n%d %d",max+max2,max,max2);
}

          
          
       
