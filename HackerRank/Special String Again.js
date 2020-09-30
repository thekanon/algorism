/*
Special String Again
조합 알고리즘으로 푸는 문제인것 같다.

일단 입력받고,
All of the characters are the same, e.g. aaa.
모든 문자들이 같은 경우 예)aaa

All characters except the middle one are the same, e.g. aadaa.
모든 문자들이 가운데 문자 하나를 제외하고 같은경우 예)aadaa

를 찾는 것이다.

예전에 풀었던 Sherlock and Anagrams 문제를 확인해보니 조합 알고리즘 없이 풀 수 있었다.
*/
var n = 5
var s = "asasd";
function substrCount(n, s) {
    var sum = 0
    for(var i=0;i<s.length;i++){   //문자열 총 길이
        for(var j=i;j<s.length;j++){   //탐색할 문자열 갯수
            var str = "";
            for(var k=i;k<=j;k++){      //문자열을 순회하며 탐색할 문자열의 갯수만큼 반복
                str+=s[k]
            }
            sum += testSpecial(str)
            console.log(str)
        }
    }
    return sum
}
function testSpecial(str){
    //1. 모든 문자가 같은지 체크 
    if(str.length ==1)
        return 1;
    for(var i=1;i<str.length;i++){
        if(str[i]!=str[0])
            return 0;
    }
    //2. 홀수인지 체크
    if(str.length%2 ==0)
        return 0;
    //3. 홀수이면 앞뒤로 잘라서 같은지 체크
    var mid = parseInt(str.length/2)
    var st = str.substr(0,mid)
    var end = str.substr(mid+1,str.length)

    if(st != end)
        return 0
    return 1;
}
substrCount(n, s)