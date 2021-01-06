/*
예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.

크로아티아 알파벳 	변경
dž 	dz=
đ 	d-
č 	c=
ć 	c-
lj 	lj
nj 	nj
š 	s=
ž 	z=

예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, š, nj, a, k)로 이루어져 있다. 
단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

dž는 무조건 하나의 알파벳으로 쓰이고, d와 ž가 분리된 것으로 보지 않는다. lj와 nj도 마찬가지이다. 
위 목록에 없는 알파벳은 한 글자씩 센다.

해답

문자열 입력받아서 루프돌면서 현재 위치에 크로아티아 알파벳이 있는지 체크
lj
es=njak 일때
0의 위치에서 l로 시작하니, 다음값이 j이면 인덱스 1증가시키면서 cnt도 1 증가
다음
2의 위치에서 e로 시작하니 cnt 1 증가
3의 위치에서 s로 시작하니 다음값이 =이면 인덱스 1증가시키면서 cnt 1증가
5의 위치에서 
*/
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string str;
    int cnt = 0;

    cin >> str;

    for(int i=0;i<str.length();i++){

        if(str[i]=='d'){
            if(str[i+1]=='z' && str[i+2]=='='){
                i+=2;
            } else if(str[i+1]=='-'){
                i+=1;
            }
            cnt+=1;
        } else if(str[i]=='c'){
            if(str[i+1] == '=' || str[i+1] == '-'){
                i+=1;
            }
            cnt+=1;
        } else if(str[i]=='l' || str[i]=='n'){
            if(str[i+1] == 'j'){
                i+=1;
            }
            cnt+=1;
        } else if(str[i]=='s' || str[i]=='z'){
            if(str[i+1] == '='){
                i+=1;
            }
            cnt+=1;
        } else {
            cnt+=1;
        }
    }
    printf("%d",cnt);
}
