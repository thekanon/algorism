function solution(s) {
    // console.log(checkStr(s))
    let result = 0
    for(i=0;i<s.length;i++){
        result += checkStr(s)
        s = rotation(s)
    }

    return result;
}
function checkStr(s){
    let sg = ["(",")"]
    let jg = ["{","}"]
    let dg = ["[","]"]

    let sr = 0;
    let jr = 0;
    let dr = 0;
    
    s.split("").forEach((e,i) => {
        if(e == sg[1])
            sr--
        else if(e==jg[1])
            jr--;
        else if(e==dg[1])
            dr--;
        if(sr<0 || jr<0 || dr<0 )
            return 0
        
        if(e==sg[0])
            sr++;
        else if(e==jg[0])
            jr++;
        else if(e==dg[0])
            dr++;

    });

    if(sr!=0 || jr!=0 || dr!=0 )
        return 0
    else 
        return 1
}
function rotation(s){
    let last = s[0];
    s = s.slice(1,s.length)+last
    return s;
}
console.log(solution("[](){}"));
console.log(solution("}]()[{"));
console.log(solution("[)(]"));
console.log(solution("}}}"));



