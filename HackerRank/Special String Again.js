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
*/
var n = 7
var s = "abcbaba";
function substrCount(n, s) {
    let count = 0;
    let consecutiveLetters = "";

    for (let i = 0; i < n; ++i) {
        if (!consecutiveLetters || consecutiveLetters[0] === s[i]) {
            // 1
            consecutiveLetters += s[i];
        } else {
            let j = 1;
            while (j <= consecutiveLetters.length && s[i + j] === consecutiveLetters[0]) {
                console.log(s[i + j])
                // 2
                ++j;
                ++count;
            }
            consecutiveLetters = s[i];
        }
        count += consecutiveLetters.length;
    }

    return count;
}

substrCount(n, s)