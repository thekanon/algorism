#include <stdio.h>
main() { 
	int n,m,i,j; 
	int a, b,val[1000];
	int cnt = 0;
	scanf("%d", &n); 
	
	for (i = 0; i < n; i++) {
		scanf("%d",&m);
		b = 0;
		for (j = 0; j < m; j++) {
			scanf("%d",&a);
			b += a;
			val[j] = a;
		}
		for (j = 0; j < m; j++) {
			if (val[j] > 1.0*b / m)
				cnt++;
		}
		printf("%.3lf%%\n", (1.0*cnt / m)*100);
		cnt = 0;
	}
}
