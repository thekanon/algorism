#include <stdio.h> 
void main(){ 
double x; while(1) { scanf("%lf",&x); if(x<0) break; 
printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n",x,x*0.167); } }