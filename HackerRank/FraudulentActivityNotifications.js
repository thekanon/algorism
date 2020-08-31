/*
영어 해석은 회사에서 써놓은거 옮기면 될거같고
일단 퇴근하면서 생각난거 정리해보자
사실 연상이 안되서 다른놈 아이디어 슬쩍 봤지만

보자
expend이 200아래의 값만 받으니까

모든 경우의 수를 다 때려박아도 200개다.

이걸로 잘 생각해보자

해쉬 expenditure = [2, 3, 4, 2, 3 ,6 ,8 ,4 ,5] 일때

2 = 2
3 = 2
4 = 2
5 = 1
6 = 1
8 = 1


2 2 3 3 4 4 5 6 8

이런식으로 해쉬맵 만들어주고

1부터 200까지 돌면서 1 이상일때만 증가하면서 중위값 구하면 된다.



*/
// Complete the activityNotifications function below.
// const expenditure = [2, 3, 4, 2, 3 ,6 ,8 ,4 ,5];
// const d = 5;
const expenditure = [10, 20, 30, 40, 50]
const d = 3;
function activityNotifications(expenditure, d) {
    const n = expenditure.length
    var answer = 0;
    for(var i=d;i<n;i++){
        var sArr = {};
        for(var j=i-d;j<i;j++){
            // 1이면 증가 아니면 1로 초기화
            sArr[expenditure[j]] = sArr[expenditure[j]]>=1 ? sArr[expenditure[j]]+=1 : 1;
        }
        var median = d%2 == 1 ? parseInt(d/2+1) : d/2
        var cnt = 0;
        for(var j=1;j<=201;j++){
            if(sArr[j]>=1){
                cnt+=sArr[j];
            }
            if(median<=cnt){
                break;
            }
        }
        var median = parseInt(d/2+1)
        //홀수라면
        if(d%2 == 1){
            if(j!=201 && j*2<expenditure[i])
                answer++;
        }
        else {
            for(var k=1;k<=201;k++){
                if(sArr[k]>=1){
                    cnt+=sArr[k];
                }
                if(median<=cnt){
                    break;
                }
            }

            if(k!=201 && (k+j)*2<expenditure[i])
                answer++;
        }
        debugger
    }
    return answer
}
activityNotifications(expenditure, d)
