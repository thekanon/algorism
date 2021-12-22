def solution(n, lost, reserve):
    for i in reserve :
        if i in lost :
            reserve.remove(i)
            lost.remove(i)
    for i in sorted(reserve) :
        if i-1 in lost or i+1 in lost :
            try:
                lost.remove(i-1)
            except:
                lost.remove(i+1)
    
    # print(lost)
    return (n-len(lost))

print(solution(5,[2,4],[1,3,5]))
print(solution(5,[2,4],[3]))
print(solution(5,[2,4,5],[3,5]))
print(solution(3,[3],[1]))
print(solution(10,[1,5,8,3,7],[7,5,2,9,6]))
print(solution(10,[1,5,8,3,7],[7,5,2,9,6]))
# def solution(n, lost, reserve):
#     s = set(lost) & set(reserve)        # 교집합
#     l = set(lost) - s   # 차집합
#     r = set(reserve) - s # 차집합
#     print(s,l,r)
#     # print(n-lostSum)
