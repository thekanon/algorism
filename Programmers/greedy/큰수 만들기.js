import { checkPropTypes } from "prop-types";

/*
문제 설명

어떤 숫자에서 k개의 수를 제거했을 때 얻을 수 있는 가장 큰 숫자를 구하려 합니다.

예를 들어, 숫자 1924에서 수 두 개를 제거하면 [19, 12, 14, 92, 94, 24] 를 만들 수 있습니다. 이 중 가장 큰 숫자는 94 입니다.

문자열 형식으로 숫자 number와 제거할 수의 개수 k가 solution 함수의 매개변수로 주어집니다. number에서 k 개의 수를 제거했을 때 만들 수 있는 수 중 가장 큰 숫자를 문자열 형태로 return 하도록 solution 함수를 완성하세요.
제한 조건

    number는 1자리 이상, 1,000,000자리 이하인 숫자입니다.
    k는 1 이상 number의 자릿수 미만인 자연수입니다.

number 배열을 k만큼 이동하면서 해당 범위에서 최대값을 찾음.


숫자각각 k만큼 반복하면서 check함수 실행.
check함수는 현재 위치의 수가 다음 k범위안에서 더 큰값이 있는지 체크함.

없으면 현상유지하고 다음 숫자로 넘어가고, 
있으면 해당 위치로 값 이동 후 앞에 있는 값 전부 삭제



*/
function solution(number, k) {
    var answer = '';

    var a = number.split("");


    for(var i=0;i<number.length;i++){
        i = checkNumber(number,i,k)

    }
    return a.join("")
}
function checkNumber(number,idx,k){
    var max = number[idx];
    var maxIdx = -1;
    for(var i=idx+1;i<=idx+k;i++){
        if(number[i]<max) {
            max = number[i]
            maxIdx = i
        }
    }
}

// console.log(solution("1924",2),"94");
// console.log(solution("1231234",3),"3234");
console.log(solution("4177252841",4),"775841");