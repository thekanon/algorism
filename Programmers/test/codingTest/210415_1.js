function solution(absolutes, signs) {
    var answer = 0;

    signs.forEach( (v,i) => {
        if(v)
            answer+=absolutes[i]
        else
        answer-=absolutes[i]

    });
    return answer;
}