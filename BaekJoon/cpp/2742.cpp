#include <iostream>
using namespace std;
int main(){
    int n;
    int i;
    int a,b;

    cin >> n;

    for(i=1;i<=n;i++){
        cin>>a>>b;
        printf("Case #%d: %d\n",i,a+b);
    }

}