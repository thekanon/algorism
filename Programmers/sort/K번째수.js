function solution(array, commands) {
    const answer = []

    commands.map( (el,i) => {
        var elArray = array.slice(el[0]-1,el[1]);
        console.log("slice :"+elArray)
        elArray.sort((a,b)=>{
            return a-b
        });
        console.log("sort : "+elArray)

        answer.push(elArray[el[2]-1]);
    });

    return answer;
}
console.log(solution([1, 5, 2, 6, 3, 7, 4],[[2, 5, 3], [4, 4, 1], [1, 7, 3]]),[5, 6, 3])