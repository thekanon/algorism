#include <iostream>
using namespace std;
int main(){
    int i;
    int a,b,c,sum;
    int arr[10]={0,0,0,0,0,0,0,0,0,0};

    cin>>a>>b>>c;

    sum = a*b*c;

    while(sum>10){
        arr[sum%10]++;
        sum/=10;
    }
    arr[sum]++;
    for(i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
