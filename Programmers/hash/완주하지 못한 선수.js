function solution(participant, completion) {
    var answer = '';
    var obj = {};
// 객체로 만듬
    for(var i=0;i<completion.length;i++){
        if(!obj[completion[i]]) {
            obj[completion[i]] = 1;
        } else {
            obj[completion[i]]=obj[completion[i]]+1;
        }
    }

    for(var i=0;i<participant.length;i++){
        if(!obj[participant[i]] || obj[participant[i]]==0) {
            return participant[i];
        } else {
            obj[participant[i]]=obj[participant[i]]-1;
        }
    }
}