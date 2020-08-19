#include <stdio.h>
void main()
{
	int a,b,c,d;
	int p,m,g;
	int cnt=0;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	scanf("%d %d %d",&p,&m,&g);
	
	if(p%(a+b)-a<0)
		cnt++;
	if(p%(c+d)-c<0)
		cnt++;
		
	if(cnt==2)
		printf("both\n");
	else if(cnt==1)
		printf("one\n");
	else 
		printf("none\n");
	cnt=0;
	
	if(m%(a+b)-a<0)
		cnt++;
	if(m%(c+d)-c<0)
		cnt++;
		
	if(cnt==2)
		printf("both\n");
	else if(cnt==1)
		printf("one\n");
	else 
		printf("none\n");
	cnt=0;
	

	if(g%(a+b)-a<0)
		cnt++;
	if(g%(c+d)-c<0)
		cnt++;
		
	if(cnt==2)
		printf("both\n");
	else if(cnt==1)
		printf("one\n");
	else 
		printf("none\n");
	cnt=0;	
	

}	