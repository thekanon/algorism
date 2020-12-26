#include <iostream>
using namespace std;
int main(){
    std::string str;
    cin >> str;

    for(int i='a';i<='z';i++){
        printf("%d ",str.find(i));
    }
}