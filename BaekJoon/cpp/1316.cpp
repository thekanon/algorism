/*
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 
각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, 
kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

고민
한번 출현한 단어가 다시나오면 그룹단어가 아니도록 해야한다.

1. 각 문자열의 인덱스를 순회하며 현재 인덱스가 다음 인덱스의 값과 동일하다면 넘어가고, 다르다면 해당 문자열[인덱스]의 값을 체크 배열의 인덱스에 넣어 true,false 를 확인한다.
2. 만약 이미 true라면 그룹단어가 아니다.
3. 만약 false라면 인덱스를 계속 순회한다.


*/
#include <iostream>
#include <string.h>
using namespace std;
bool checkGroupWord(string str){
    int check[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    for(int i=0;i<str.length();i++){
        if(str[i]!=str[i+1]){
            if(check[str[i]-97]!=1){
                check[str[i]-97]=1;
            } else {
                return false;
            }
        }
    }
    return true;
}
int main(){
    int cnt = 0;
    int n;
    string str;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>str;
        if(checkGroupWord(str)){
            cnt++;
        }
    }
    printf("%d",cnt);
}