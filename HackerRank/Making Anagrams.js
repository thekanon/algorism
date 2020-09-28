/*
Alice is taking a cryptography class and finding anagrams to be very useful. 
We consider two strings to be anagrams of each other if the first string's letters can be rearranged to form the second string. 
In other words, both strings must contain the same exact letters in the same exact frequency 
For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.
Alice decides on an encryption scheme involving two large strings where encryption is dependent 
on the minimum number of character deletions required to make the two strings anagrams. Can you help her find this number?
Given two strings, a and b, that may or may not be of the same length, 
determine the minimum number of character deletions required to make a and b anagrams. 
Any characters can be deleted from either of the strings.

For example, 
if a = cde and b - dcf, we can delete e from string a and f from string b so that both remaining strings are cd and dc which are anagrams.

문자열 2개 입력받음
두개 비교해서 아나그램이 되기위해 몇개를 삭제해야하는지 출력

풀이
해쉬맵으로 품
알파벳 a-z의 아스키코드값을 0으로 초기화한 배열 2개를 만듬

입력값 a,b를 순회하면서 각 알파벳에 해당하는 인덱스에 1씩 추가함

다시 알파벳을 순회하면서, a,b의 차이를 cnt에 넣음.
*/

var a = "fcrxzwscanmligyxyvym"
var b = "jxwtrhvujlmrpdoqbisbwhmgpmeoke"
function makeAnagram (a,b) {
    // console.log(n,r,cnt)
    var aArr = []
    var bArr = []

    for(var i=97;i<97+26;i++){
        aArr[i] = 0
        bArr[i] = 0
    }
    for(var i=0;i<a.length;i++){
        aArr[a[i].charCodeAt()]++;
    }
    for(var i=0;i<b.length;i++){
        bArr[b[i].charCodeAt()]++;
    }
    var cnt = 0;
    for(var i=97;i<97+26;i++){
        if(aArr[i] != bArr[i]){
            cnt += Math.abs(aArr[i] - bArr[i])
        }
    }
    console.log(aArr)
    console.log(aArr)
    console.log(cnt)
    return cnt
}
makeAnagram(a, b);