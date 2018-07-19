int main(void)
{
 int x,m;
 int n;
 scanf("%d %d",&x,&m);

 for(n=0; n<m ; n++)
 {
  if((x*n-1)%m==0)
   printf("%d",n);
  
  
  else if((x*n-1)%m<0)
   printf("No such integer exists.");
 }
 
 return 0;
}