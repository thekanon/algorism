import itertools
def solution(numbers):
    for i in range(len(numbers)) :
        w = itertools.permutations(numbers,i+1)
        for item in list(w):
            print(int(item))
        

    return list(w)
solution("17")
solution("011")