#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int i,j,n;
    int cnt=0,sum=0;
    char str[80];
    
    cin>>n;
    for(j=0;j<n;j++){
        cin>>str;
        sum=0;
        for(i=0;i<strlen(str);i++){
            cnt=0;
            while(str[i] == 'O'){
                i++;
                cnt++;
                sum+=cnt;
            }
            
        }
        printf("%d\n",sum);
    }
}
