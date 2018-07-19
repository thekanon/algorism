#include <stdio.h> 

int main() 
{ 
    int a,i,total,n,m,l,k;
 total = 0;
 n=0;
 m=0;
 l=0;
 k=0;

 for(i=1 ; i<=7 ; i++)
 {
  scanf("%d",&a);
  total+=a;
 }
n = total-total%100; // 100의자리
m = total-n;
k = m%10; // 10의 자리
l = total-n-k; // 1의 자리
 printf("%d %d %d",l,k,n);
}