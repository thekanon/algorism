#include <iostream>
using namespace std;
int main(){
    int i,n;
    int max=-1,maxi;

    for(i=0;i<9;i++){
        cin>>n;
        if(max<n){
            max=n;
            maxi=i;
        }
    }
    printf("%d\n%d",max,maxi+1);
    return 0;
}
