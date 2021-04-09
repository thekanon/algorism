function solution(rows, columns, queries) {
    var answer = [];
    var vac = [];

    vac.push([])
    for(let i=1;i<=rows;i++){
        vac.push([])
        vac[i].push(0)
        for(let j=1;j<=columns;j++){
            console.log((i-1)*rows)
            vac[i].push((i-1)*rows + j)
        }
    }
    console.log(vac)
    queries.forEach(el => {
        for(let i=el[0];i<=el[2];i++){
            let str = "";
            for(let j=el[1];j<=el[3];j++){
                str+=vac[i][j]+" ";
            }
            console.log(str+"\n")
        }
    });

    return answer;
}
console.log(solution(6,6,[[2,2,5,4],[3,3,6,6],[5,1,6,3]]),6)