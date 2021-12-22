def solution(number, k):
    c = []
    for i, num in enumerate(number):
        while len(c) > 0 and c[-1] < num and k > 0:
            c.pop()
            k-=1
        if k==0:
            c +=list(number[i:])
            break
        c.append(num)
    c = c[:-k] if k>0 else c
    answer = ''.join(c)
    return answer


    def solution(number, k):
        L = list(number)
    i = 0
    # number끝까지 순회함
    while i < len(L) - k:
        #i부터 k까지 최대값 찾음
        max_val = max(L[i:i + k + 1])
        #최대값 인덱스 찾음
        max_idx = L.index(max_val)
        #i가 최대값 인덱스가 아니라면 i부터 최대값 인덱스까지 삭제 
        if i != max_idx:
            del L[i:max_idx]
            k -= max_idx - i
        i += 1
        print(L)
    del L[len(L) - k:]
    return ''.join(L)