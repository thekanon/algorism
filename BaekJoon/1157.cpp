/*
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
음
arr['a']++;
이런식으로 해쉬를 쓴다면?
- c++에서 대소문자 구분할려면 어케해야하는지 찾아보자

처음 생각한 답
1. 해쉬로 저장
2. 정렬
3. 0이랑 1이랑 같으면 ?이고 아니면 문자열 출력

*/
#include <iostream>
#include <vector>       // std::vector
#include <algorithm>    // std::sort
using namespace std;
int main(){
    int myints[] = {32,71,12,45,26,80,53,33};
    vector<int> myvector (myints, myints+8);
    
    sort(myvector.begin(), myvector.begin()+8);

    for(int i=0;i<8;i++){
        printf("%d\n",myvector[i]);
    }
}