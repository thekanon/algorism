#include <iostream>
using namespace std;
int result(int n){
    int f,m,l;
    f = n/100;
    n%=100;
    m = n/10;
    l = n%10;

    if(f-m == m-l){
        return 1;
    }
    return 0;
}
int main(){
    int n,i,sum=0;
    cin>>n;
    if(n<100)
        printf("%d",n);
    else {
        for(i=100;i<=n;i++){
            sum += result(i);
        }
        printf("%d",sum+99);
    }
    return 0;
}
/*
1. 99 이하는 걍 99넣으면 됨.
2. 100 이상은 등비수열인지 확인
2.1 입력값의 한계가 1000까지이므로 그냥 3자리만 테스트하면 됨.
2.2 1000은 어차피 포함 안되니까 카운트 안하면됨.


3.1 first, middle, last 3개의 변수에 각각 자릿수 넣음
3.2 first-middle == middle-last이면 등비수열임.
1-2 = -1
2-3 = -1

4. 


*/