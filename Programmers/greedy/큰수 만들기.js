/*
문제 설명

어떤 숫자에서 k개의 수를 제거했을 때 얻을 수 있는 가장 큰 숫자를 구하려 합니다.

예를 들어, 숫자 1924에서 수 두 개를 제거하면 [19, 12, 14, 92, 94, 24] 를 만들 수 있습니다. 이 중 가장 큰 숫자는 94 입니다.

문자열 형식으로 숫자 number와 제거할 수의 개수 k가 solution 함수의 매개변수로 주어집니다. number에서 k 개의 수를 제거했을 때 만들 수 있는 수 중 가장 큰 숫자를 문자열 형태로 return 하도록 solution 함수를 완성하세요.
제한 조건

    number는 1자리 이상, 1,000,000자리 이하인 숫자입니다.
    k는 1 이상 number의 자릿수 미만인 자연수입니다.

스택구조
number를 length까지 순회한다.
    순회하면서 스택에 number[i]를 push한다.
        아래 내용을 반복한다.
            스택에 맨 위에 있는 값과 number[i]를 비교해서 number[i]가 더 크면 스택을 pop하고 k를 줄인다.


*/
function solution(number, k) {
    var answer = '';
    var arr = [];

    for(var i=0;i<number.length;i++){
        var el = number[i];
        while(k>0 && arr[arr.length-1]<el){
            arr.pop();
            k--
        }
        arr.push(el)
        console.log(arr,k)
    }
    answer = arr.join("")
    if(k!=0){
        answer = answer.substr(0,number.length-k)
    }
    return answer
}
// console.log(solution("1924" 	,2 	,"94"))
// console.log(solution("1231234" 	,3 	,"3234"))
// console.log(solution("1231234",3),"3234");
// console.log(solution("4177252841",4),"775841");

console.log(solution("7777777", 2),"77777")