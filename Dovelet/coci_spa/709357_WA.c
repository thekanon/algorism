#include <stdio.h>
int main(){
	int a,b,c=60;
	scanf("%d %d",&a,&b);

	b=b+c-45;

	if(b<=60){
		a--;
	}
	printf("%d %d",a,b);
	

}
