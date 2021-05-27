/*
조이스틱으로 알파벳 이름을 완성하세요. 맨 처음엔 A로만 이루어져 있습니다.
ex) 완성해야 하는 이름이 세 글자면 AAA, 네 글자면 AAAA

조이스틱을 각 방향으로 움직이면 아래와 같습니다.

▲ - 다음 알파벳
▼ - 이전 알파벳 (A에서 아래쪽으로 이동하면 Z로)
◀ - 커서를 왼쪽으로 이동 (첫 번째 위치에서 왼쪽으로 이동하면 마지막 문자에 커서)
▶ - 커서를 오른쪽으로 이동

예를 들어 아래의 방법으로 "JAZ"를 만들 수 있습니다.

- 첫 번째 위치에서 조이스틱을 위로 9번 조작하여 J를 완성합니다.
- 조이스틱을 왼쪽으로 1번 조작하여 커서를 마지막 문자 위치로 이동시킵니다.
- 마지막 위치에서 조이스틱을 아래로 1번 조작하여 Z를 완성합니다.
따라서 11번 이동시켜 "JAZ"를 만들 수 있고, 이때가 최소 이동입니다.

만들고자 하는 이름 name이 매개변수로 주어질 때, 이름에 대해 조이스틱 조작 횟수의 최솟값을 return 하도록 solution 함수를 만드세요.
제한 사항

    name은 알파벳 대문자로만 이루어져 있습니다.
    name의 길이는 1 이상 20 이하입니다.

입출력 예
name 	return
"JEROEN" 	56
"JAN" 	23


1. 각 알파벳별 상하 이동횟수 계산
- 더 높은 값 선택

2. 좌우 이동경로 계산
- 움직일 수 있는 최단경로 예) BAABAAA 일때 왼쪽보다 오른쪽이 이득
*/
function solution(name) {
    var answer = 0;
    let str = name.split("");
    let moveCountArr = [];
    let checkArr = [];
    
    str.map(el => {
        let up = el.charCodeAt()-"A".charCodeAt();
        let down = "Z".charCodeAt() - el.charCodeAt()+1;
        let move = up>down ? down : up
        moveCountArr.push(move)
        checkArr.push(0)
    })
    let idx = 0;
    for(let i=0;i<str.length;i++){
        // for(let j=i;j<str.)
        let r = calRightCnt(str,idx)
        let l = calLeftCnt(str,idx)
        console.log("")
        idx = calRightCnt(str,idx)
    }
    console.log(moveCountArr)
    return answer;
}
function calLeftCnt(str,idx){
    //현재 문자열에서 A가 아닌값까지 얼마나 이동했는지 리턴한다.(뒤로)
    let cnt = 0;
    if(str[idx]=="A"){
        return 0;
    }
    for(let i=idx-1;i>=0;i--){
        cnt++
        if(str[i]!="A"){
            return cnt;
        }
    }
    for(let i=str.length-1;i>=0;i--){
        cnt++
        if(str[i]!="A"){
            return cnt;
        }
    }
    return 0
}
function calRightCnt(str,idx){
    //현재 문자열에서 A가 아닌값까지 얼마나 이동했는지 리턴한다.
    let cnt = 0;
    if(str[idx]=="A"){
        return 0;
    }
    for(let i=idx+1;i<str.length;i++){
        cnt++
        if(str[i]!="A"){
            return cnt;
        }
    }
    return 0
}
console.log(solution("BBAABAA"));
