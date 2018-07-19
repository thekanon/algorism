#include <stdio.h>
#include <string.h>
void main()
{
	char a[27];
	int n,i;


	scanf("%s",a);


	n=strlen(a);

	for(i=0;i<n;i++)
	{
		if(a[i]=='H' || a[i]=='h')
			printf("Hello, world!\n");
		else if(a[i]=='Q' || a[i]=='q')
			printf("%s\n",a);
		else if(a[i]=='9' || a[i]=='9')
			printf("99 Bottles of Beer on the Wall\n");
	}
}