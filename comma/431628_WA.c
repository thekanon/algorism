#include <stdio.h>
#include <string.h>
void main()
{
	char a[99];
	int n,i,cou=0,na;


	scanf("%s",a);


	n=strlen(a);

	na=n%3;

	for(i=0;i<na;i++)
		printf("%c",a[i]);
	if(na!=0)
		printf(",");

	for(i=na;i<n;i++)
	{
		printf("%c",a[i]);
		cou++;
		if(cou%3==0 && i!=n-1)
			printf(",");
	}



}