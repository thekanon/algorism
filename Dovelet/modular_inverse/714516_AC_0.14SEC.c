int main(void)
{
 int x,m;
 int n,a=1;

 scanf("%d %d",&x,&m);

 for(n=1; n<m ; n++)
 {
  if(x*n%m==1){
   printf("%d",n);
   a=0;
  }   
 }
 if(a==1)
	 printf("No such integer exists.");
 
 return 0;
}