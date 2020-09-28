/*
You are given a string containing characters A and B only. 
당신은 문자 오직 A,B만 포함된 문자열을 받는다.

Your task is to change it into a string such that there are no matching adjacent characters. 
당신의 작업은 문자열을 바꾸는 것이다 이러한 것들에 대해 ~ 일치하는 인접 문자가 없도록

To do this, you are allowed to delete zero or more characters in the string.
이렇게 하려면, 당신은 0 또는 더 많은 문자열을 삭제해야한다. 

Your task is to find the minimum number of required deletions.
당신의 작업은 필수적으로 삭제하는 최소값을 찾는 것이다.

For example, given the string s = AABAAB, remove an A at positions 0 and 3 to make s = ABAB in 2 deletions.
예를들어, 문자열 s = AABAAB가 주어지면, A는 0과 3에서 제거되고, 2개가 삭제된 s = ABAB가 만들어진다. 

아주아주 쉬운 문제다
그냥 받아서 옆에꺼랑 비교해서 다르면 +1해버리면됨

*/
var s = "ABABABAB"
// var s = ["AAAA","BBBBB","ABABABAB","BABABA","AAABBB"]

function alternatingCharacters (s) {
    var cnt = 0;
    for(var j=1;j<s.length;j++){
        if(s[j] == s[j-1]){
            cnt++;
        }
    }

    return cnt
}
alternatingCharacters(s);