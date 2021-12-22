def solution(str):
    result = 0
    for i in str:
        if(i == "회전목마"):
            result +=10
        if(i == "범퍼카"):
            result +=20
        if(i == "유령의집"):
            result +=30
    print(result)
    return result
solution(["회전목마","범퍼카","유령의집"])
