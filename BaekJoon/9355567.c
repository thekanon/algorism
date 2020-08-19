#include <stdio.h>
int main() 
{
	char a = 0;
	while (1) {
		a=getchar();
		if (a == EOF)
			break;
		putchar(a);
	}
}