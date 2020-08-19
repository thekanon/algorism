#include <stdio.h>
main(n,cnt) { 
	scanf("%d", &n); 
	
	cnt = (n / 5)+1;

	while (cnt) {
		cnt--;
		if ((n - (cnt * 5)) % 3 == 0){
			printf("%d", cnt + (n - (cnt * 5)) / 3);
			break;
		}
		if (cnt == 0)
			printf("-1");

	}
}