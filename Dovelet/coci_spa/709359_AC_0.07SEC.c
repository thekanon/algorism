#include <stdio.h>
int main(){
	int a,b,c=60;
	scanf("%d %d",&a,&b);

	if(b<45){
		b=b+c-45;
		a--;
	}
	else
		b-=45;


	
	printf("%d %d",a,b);
	

}
