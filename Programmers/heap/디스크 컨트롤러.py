import heapq
import math
def solution(jobs):
    heap = []

    donums = jobs

    for donum in donums:
        donum.append(donum[0]+donum[1])
        heapq.heappush(heap, [donum[2],donum[1],donum[0]])  # (우선 순위, 값)

    res = 0
    resArr = 0
    while heap:
        A = heapq.heappop(heap)
        res= res+A[1]
        resArr = resArr + (res-A[2])

    return math.trunc(resArr/len(donums))

print(solution([[0, 10], [2, 10], [9, 10], [15, 2]]), 14)
print(solution([[0, 10], [2, 12], [9, 19], [15, 17]]), 25)
print(solution([[0, 3], [1, 9], [2, 6]]), 9)
print(solution([[0, 1]]), 1)
print(solution([[1000, 1000]]), 1000)
print(solution([[0, 1], [0, 1], [0, 1]]), 2)
print(solution([[0, 1], [0, 1], [0, 1], [0, 1]]), 2)
print(solution([[0, 1], [1000, 1000]]), 500)
print(solution([[100, 100], [1000, 1000]]), 500)
print(solution([[10, 10], [30, 10], [50, 2], [51, 2]]), 6)
print(solution([[0, 3], [1, 9], [2, 6], [30, 3]]), 7)