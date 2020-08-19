#include <stdio.h>
void main()
{
	int a,b,c,d,n=0;
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a==1)
		n+=461;
	else if(a==2)
		n+=431;
	else if(a==3)
		n+=420;



	if(b==1)
		n+=130;
	else if(b==2)
		n+=160;
	else if(b==3)
		n+=118;

	if(c==1)
		n+=100;
	else if(c==2)
		n+=57;
	else if(c==3)
		n+=70;


	if(d==1)
		n+=167;
	else if(d==2)
		n+=266;
	else if(d==3)
		n+=75;

	printf("%d",n);
	
}