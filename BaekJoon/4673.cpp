#include <vector>
#include <iostream>
using namespace std;
long long selfNumber(int n, int arr[]) {
    int sum=0;
    int number = n;
    while(n!=0){
        sum +=n%10;
        n/=10;
    }
    sum+=number;

    arr[sum]=1;

	return sum;
}
int main(){
    int i;
    int arr[20000];

    for(i=0;i<20000;i++){
        arr[i]=0;
    }

    for(i=1;i<=10000;i++){
        selfNumber(i,arr);
    }

    for(i=1;i<=10000;i++){
        if(arr[i]==0){
            printf("%d\n",i);
        }
    }

    return 0;
}