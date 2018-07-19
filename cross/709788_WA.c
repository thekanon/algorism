void main() 
{ 
int a1,b1,a2,b2; 
scanf("%d %d",&a1,&b1); 
if(b1<a1){ 
a1=a1+b1; 
b1=a1-b1; 
a1=a1-b1; 
} 
scanf("%d %d",&a2,&b2); 
if(b2>a2){ 
a2=a2+b2; 
b2=a2-b2; 
a2=a2-b2; 
} 
if((((a1>a2 && b1>a2)||(a1<a2 && b1<a2))&&(a1<b2 && b2<b1))||(((a1>b2 && b1>b2)||(a1<b2 && b1<b2))&&(a1<a2 && a2<a1)))
	printf("cross"); 
else 
	printf("not cross"); 
}