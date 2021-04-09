var n = 5;
var passenger = [1, 1, 2, 3, 4];
var train = [[1, 2], [1, 3], [1, 4], [1, 5]];
var answer = [[0,0]];
function solution(n, passenger, train) {
    var port = [];
    for(let i=0;i<=n+1;i++){
        port.push([]);
    }

    for(let i=0;i<train.length;i++){
        port[train[i][0]].push(train[i][1])
        port[train[i][1]].push(train[i][0])
    }


    let startPort = 1;
    let result = passenger[0];
    let oldPort = 0;
    checkPort(startPort,oldPort, result,port,answer,passenger)

    answer.sort();

    return [answer[answer.length-1][1],answer[answer.length-1][0]];
}
function checkPort(startPort,oldPort, result,port,answer,passenger) {
    let callFlag = false;
    port[startPort].forEach(element => {
        if(element != oldPort){
            console.log(element,startPort,result+passenger[element-1],port,answer,passenger)
            checkPort(element,startPort,result+passenger[element-1],port,answer,passenger)
            callFlag = true
        }
    });
    if(!callFlag){
        if(result>=answer[0][0]){
            // console.log([result,startPort])
            answer.push([result,startPort])
        }
    }
}
solution(n, passenger, train)

