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
-> 취소, 모든 경우의 수를 뽑아냈더니 시간초과 오류가 발생함.

구글링을 통해 답을 확인했는데 대략적인 로직은 이해가 되지만, 카운트 쌓는 로직이 이해가 잘 되지 않는다.

* consecutiveLetters는 카운트 할 조건에 해당하는 문자열이다.
* s는 대상이 되는 전체 문자열이다.
* i는 
1. 우선 consecutiveLetters가 1개 쌓이면 무조건 카운트한다.
2. consecutiveLetters가 쌓여있고, consecutiveLetters의 첫번째 값이 s[i]와 동일하다면 한번 더 쌓고 카운트한다.
3. 

*/
var n = 7
var s = "abcbaba";
function substrCount(n, s) {
    var count = 0;
    var consecutiveLetters = "";

    for (var i = 0; i < n; i++) {
        // bb에 아무것도 없거나, consecutiveLetters가 각 문자열의 시작점과 동일한 경우
        if (!consecutiveLetters || consecutiveLetters[0] === s[i]) {
            consecutiveLetters += s[i];
        } else {
            var j = 1;
            while (j <= consecutiveLetters.length && s[i + j] === consecutiveLetters[0]) {
                // 2
                j++;
                count++;
            }
            consecutiveLetters = s[i];
        }
        count += consecutiveLetters.length;
    }

    return count;
}

substrCount(n, s)