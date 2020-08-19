#include <stdio.h>
void main()
{
	int a,b,c,d,e;
	
	scanf("%d %d %d %d",&a,&b,&c,&d); //원가 정가 가짜돈 거스름돈

	e=a-(b+d-c-d); //낸돈

	printf("%d",e);



}