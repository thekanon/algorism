/*
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
음
arr['a']++;
이런식으로 해쉬를 쓴다면?
- c++에서 대소문자 구분할려면 어케해야하는지 찾아보자

처음 생각한 답
1. 해쉬로 저장
2. 정렬 sort(myvector.begin(), myvector.begin()+8);
3. 0이랑 1이랑 같으면 ?이고 아니면 문자열 출력

*/
#include <iostream>
#include <vector>       // std::vector
#include <algorithm>    // std::sort
using namespace std;
int main(){
    int myints[] = {32,71,12,45,26,80,53,33};
    int max=0,num;
    string str;
    cin >> str;


    vector<int> myvector (26);
    

    for(int i=0;i<str.length();i++){
        if(65<=str[i] && str[i]<=90){
            myvector[str[i]-65]++;
            num = str[i]-65;
        }else if(97<=str[i] && str[i]<=122){
            myvector[str[i]-97]++;
            num = str[i]-97;
        }
        max = myvector[max] < myvector[num] ? num : max;
    }
    sort(myvector.begin(), myvector.end());
    if(myvector[24]!=myvector[25]){
        printf("%c",max+65);
    }else {
        printf("?");
    }
}