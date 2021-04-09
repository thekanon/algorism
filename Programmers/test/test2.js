function solution(lottos, win_nums) {
    var answer = [0,0];

    let num = [];
    let count = 0;
    let zeroCount = 0;
    for(let i=0;i<win_nums.length;i++){
        num[win_nums[i]] = 1;
    }

    for(let i=0;i<lottos.length;i++){
        if(num[lottos[i]]==1)
            count++;
        else if(lottos[i]==0)
            zeroCount++
    }

    answer[1] = setCal(count)
    answer[0] = setCal(count+zeroCount)
    
    return answer;
}
function setCal(num){
    let answer = -1
    if(num==6){
        answer = 1
    } else if(num==5){
        answer = 2
    } else if(num==4){
        answer = 3
    } else if(num==3){
        answer = 4
    } else if(num==2){
        answer = 5
    } else {
        answer = 6
    }
    return answer
}
console.log(solution([44, 1, 0, 0, 31, 25],	[31, 10, 45, 1, 6, 19],	[3, 5]));