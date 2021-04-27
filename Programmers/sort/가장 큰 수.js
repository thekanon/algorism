function solution(numbers) {
    var answer = '';
    var 
    numbers.map( (el,i) => {
        while(numbers[i]<1000)
            numbers[i]*=10;
    })
    console.log(numbers)

    return answer;
}
console.log(solution([6, 10, 2]),"6210")
console.log(solution([3, 30, 34, 5, 9]),"9534330")