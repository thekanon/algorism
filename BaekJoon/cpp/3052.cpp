#include <iostream>
using namespace std;
int main(){
    int mod[42];
    int i;
    int n,cnt=0;
    for(i=0;i<42;i++){
        mod[i]=0;
    }

    for(i=0;i<10;i++){
        cin>>n;
        mod[n%42]++;
    }
    for(i=0;i<42;i++){
        if(mod[i]!=0){
            cnt++;
        }
    }
    printf("%d",cnt);
}
