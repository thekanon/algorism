#include <iostream>
using namespace std;
int main(){
    std::string str;
    int n;
    int cnt = 0;

    cin>>n;

    for(int i=0;i<n;i++){
        cin >> cnt >> str;
        for(int j=0;j<str.length();j++){
            for(int k=0;k<cnt;k++){
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }
}