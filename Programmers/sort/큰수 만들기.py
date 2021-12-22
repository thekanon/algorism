from itertools import permutations

def solution(numbers):
    a = []
    c = []
    for i in permutations(numbers, len(numbers)):
        a.append(i)
        print(i)
    for x in a:
        num = list(map(str, x))
        s = "".join(num)
        c.append(int(s))
    return str(max(c))

solution([1,2,3])
# solution([6, 10, 2])
# solution([3, 30, 34, 5, 9])