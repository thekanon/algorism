#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(a> 0 && b > 0){
        printf("1");
    }
    else if(a < 0 && b > 0){
        printf("2");
    }
    else if(a < 0 && b < 0){
        printf("3");
    }
    else if(a > 0 && b < 0){
        printf("4");
    }
}