# s2에서 k가 있는 인덱스를 찾음
# s1에서 동일한 인덱스를 찾음
# 해당 작업 무한반복

# s2.
# pos = np.where(np.array(l1) == 1)[0]

import numpy as np
def solution(s1, s2, k):
    answer = []

    def search_k(k,answer):
        for i in k:
            print(s2,i)
            pos = np.where(np.array(s2) == i)[0]
            arr = []
            print(pos)
            for j in pos:
                print(j)
                s2[j] = -1
                arr.append(s1[j])
            if(len(arr)==0):
                answer.append(i)
            else:
                search_k(arr,answer)


    search_k([k],answer)
    print(answer)
    return answer


s1 = ["A", "E", "B", "D", "B", "H", "F", "H", "C"]
s2 = ["G", "C", "G", "F", "J", "E", "B", "F", "B"]
k = "G"
solution(s1, s2, k)