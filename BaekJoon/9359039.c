#include <stdio.h>
main() { 
	int n,i; 
	int a, b;
	scanf("%d", &n); 
	
	for (i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}
