def solution(people, tshirts):
    answer = 0
    people.sort()
    tshirts.sort()
    
    for i,num in enumerate(people):
        print(i,num)
    
    return answer