var clothes = [["yellow_hat", "headgear"], ["blue_sunglasses", "eyewear"], ["green_turban", "headgear"]];
function solution(clothes) {
    var answer = {};

    for(var i=0;i<clothes.length;i++){
        answer[clothes[i][1]] = answer[clothes[i][1]] ? answer[clothes[i][1]]+1 : 1
    }
    var cnt = 1;
    Object.values(obj).forEach(element => {
        cnt *= (element+1)
    });


    return cnt-1;
}
solution(clothes);
