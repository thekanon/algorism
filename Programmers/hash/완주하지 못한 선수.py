def solution(participant, completion):
    d = {}
    for i in completion : 
        d[i]=d.get(i,0)+1

    for i in participant:
        if(d.get(i,0)==0):
            return i
        else:
            d[i]=d[i]-1
    return


participant = ["leo", "kiki", "eden"]
completion = ["eden", "kiki"]
solution(participant, completion)

participant = ["marina", "josipa", "nikola", "vinko", "filipa"]
completion = ["josipa", "filipa", "marina", "nikola"]
solution(participant, completion)

participant = ["mislav", "stanko", "mislav", "ana"]
completion = ["stanko", "ana", "mislav"]
solution(participant, completion)
