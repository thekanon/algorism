#include <stdio.h>
void main()
{
float n;
scanf("%f",&n);
if(n==12)
printf("0.000000");
else if(n==11)
printf("CAN'T SEE!");
else
printf("%.6f",(n*60)/11);
} 