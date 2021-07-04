/*
1000	[1200, 1000, 1100, 1200, 900, 1000, 1500, 900, 750, 1100]	2150
1500	[1500, 1400, 1300, 1200]	1500

올라가는 구간의 시작에서 사서, 내려가는 구간의 시작에 팜
i-1 > i && i <i+1 일때 올라가는 구간 uArr
i-1 < i && i> i+1 일때 내려가는 구간 dArr

rates를 순회하면서 올라가는 구간과 내려가는 구간을 저장함.

단, 올라가는 구간에 살 돈이 충분해야 함.
단, k보다 최종값이 더 작은경우 k를 리턴해야함.
*/

function solution(k, rates) {
    var answer = 0;
    rates.push(0)

    for(var i=1;i<rates.length;i++){
        var amt = rates[i]
        if(rates[i-1] > rates[i] && rates[i] < rates[i+1]){
            k-=amt
        }
        if(rates[i-1] < rates[i] && rates[i]  > rates[i+1]){
            k+=amt
        }
    }

    return k;
}
console.log(solution(1000,[1200, 1000, 1100, 1200, 900, 1000, 1500, 900, 750, 1100]),2150);
console.log(solution(1500,[1500, 1400, 1300, 1200])	,1500);