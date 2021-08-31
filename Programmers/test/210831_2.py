def solution(str):
    result = ""
    for i in sorted(str.split(" ")):
        result +=i+" "
    print(result[0:-1])
    return result[0:-1]
solution("엘리스 토끼 안녕")
# solution("011") 