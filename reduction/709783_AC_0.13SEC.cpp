#include<iostream>  
#define E 0.0001 
using namespace std;  
int a,b,c,d,t;  
void reduce(int rate)  
{  
     double width = a * (rate*0.01) ;  
     double height =  b * (rate*0.01);  

     if ( width - c <= E && height - d <= E )  
     {  
         if ( rate == 100 )  
               cout << rate << '%';  
          else if ( rate < 100 )  
               reduce( rate + 1 );  
     }  
     else  
     {  
          cout << rate - 1 << '%';  
     }  
}  

int main(){  
    cin>>a>>b>>c>>d;  
    if(a<b){t=a;a=b;b=t;}if(c<d){t=c;c=d;d=t;}  
    reduce(1);  
}