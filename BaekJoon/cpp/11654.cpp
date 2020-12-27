#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char num[100];
    int cnt=0,n;
    cin >> n;
    cin >> num;

    for(int i=0;i<n;i++){
        cnt+=num[i]-48;
    }

    printf("%d",cnt);
}