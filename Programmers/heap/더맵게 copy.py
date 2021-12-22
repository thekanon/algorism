import heapq
def solution(scoville, K):
    answer = 0
    scoville = heapq.heapify(scoville)
    while True:
        min1 = heapq.heappop(scoville)
        if min1 >= K:
            break
        elif len(scoville) == 0:
            answer = -1
            break
        min2 = heapq.heappop(scoville)
        new_scoville = min1 + 2 * min2
        print(new_scoville)
        heapq.heappush(scoville,new_scoville)
        answer += 1
    return answer
print(solution([1, 1, 1], 4), 2)
