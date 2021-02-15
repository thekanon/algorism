let progresses = [5, 5, 5];
let speeds = [21, 25, 20];
function solution(progresses, speeds) {
    var answer = [];
    var dis = [];
    //1. 배포일 배열을 구한다.

    progresses.forEach((el,i) => {
        dis.push(parseInt((100-el)/speeds[i])+((100-el)%speeds[i]!=0 ? 1 : 0));
    });
    console.log(dis)

    answer.push(1);
    for(let i=1,j=0;i<dis.length;i++){
        if(dis[i-1]>=dis[i]){
            dis[i]=dis[i-1]
            answer[j]++;
        }else {
            answer.push(1);
            j++;
        }
    }


    return answer;
}

solution(progresses,speeds);