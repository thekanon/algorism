function solution(answers) {
    var answer = [];
    var supo = [[1,2,3,4,5], [2,1,2,3,2,4,2,5],[3,3,1,1,2,2,4,4,5,5]]
    
    var max = -1;
    var s = [0,0,0];
    
    answers.map( (el,i) => {
        for(var j=0;j<3;j++){
            if(el == supo[j][i%supo[j].length]){
                s[j]++;
                if(max<=s[j])
                    max=s[j]
            }
        }
    })
    s.map((el,i) => {
        if(el==max) 
            answer.push(i+1)
    });
    return answer;
}
solution([1,2,3,4,5])