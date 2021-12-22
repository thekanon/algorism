/*
    정렬해서 붙어있는 값은 하나로 치면 될듯
    -> 너무 단순하게 생각함

    1. 정렬함
    2. 최소값을 더했을때 원본이랑 같거나 작은지 체크
    -> 아직 단순하게 생각함

    arr이 모두 0이 될때까지 뺌
        1. 최소값 찾음
        2. 최소값 뺌
            최소값 뺄때 구간 찾음
                구간찾는법 : 
                    앞의 원소가 0이고 본인이 0이 아니면 구간임, 단 0번째는 본인이 1이면 구간임.
                    

        3. 모두 0이 되면 끝

        [0,0,1,1,1,0,0,1,1,0,0,1]

*/
function solution(arr) {
    var answer = -1;
    var count =0;
    var minPlus = (arr) =>{
        var min = Number.MAX_SAFE_INTEGER
        arr.map(el =>{
            if(el>0 && el<min)
                min = el
        })
        return min
    }
    while(Math.max.apply(null, arr)!=0)
    {
        var min = minPlus(arr);
        console.log(arr,min)
        for(var i=0;i<arr.length;i++){

        }
        for(var i=0;i<arr.length;i++){
            if(arr[i]-min>=0){
                arr[i]-=min
            }
        }

        for(var i=0;i<arr.length;i++){
            if(arr[i-1]==0 && arr[i]!=0){
                count++;
            }
            if(arr[i]!=0 && i==0){
                count++
            }
        }
        console.log(arr)
        console.log(count)
        console.log("=========")
    }    
    console.log(count-1)
}
console.log(solution([1, 2, 4, 8, 4, 2, 1])	,4)
console.log(solution([1, 3, 5, 7, 6, 8, 9, 5, 1])	,7)
console.log(solution([10, 0, 10, 0, 10, 0])	,3)
console.log(solution([5, 4, 5, 4, 5, 5])	,4)