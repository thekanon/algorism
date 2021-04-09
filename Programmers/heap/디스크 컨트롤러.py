import heapq
import math
def solution(jobs):
    i=0

    # 모든 jobs를 순회함(힙에 모든 jobs가 들어갔다 나갈때까지 반복)
    while i < len(jobs) :
        # 조건이 변경될때마다 jobs를 힙에 넣음.
        for j in jobs :


    return int(answer / len(jobs))

print(solution([[0, 10], [2, 10],[15, 2], [9, 10]]), 14)
# print(solution([[0, 10], [2, 12], [9, 19], [15, 17]]), 25)
# print(solution([[0, 3], [1, 9], [2, 6]]), 9)
# print(solution([[0, 1]]), 1)
# print(solution([[1000, 1000]]), 1000)
# print(solution([[0, 1], [0, 1], [0, 1]]), 2)
# print(solution([[0, 1], [0, 1], [0, 1], [0, 1]]), 2)
# print(solution([[10, 10], [30, 10], [50, 2], [51, 2]]), 6)
# print(solution([[0, 3], [1, 9], [2, 6], [30, 3]]), 7)