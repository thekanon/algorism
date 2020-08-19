#include "iostream"
#include "math.h"
using namespace std;
int main(){ 
	int a,b; 
	cin>>a>>b; 
	int i,count = b-a+1;
	i=a; 
	while(i<=b){  
	if( (int)sqrt(i) * (int)sqrt(i) == i){
		count--;   
		i = ((int)sqrt(i) + 1) * ((int)sqrt(i) + 1);  
	}  else   
		i++; 
	} 
	cout< 
	return 0;
}
