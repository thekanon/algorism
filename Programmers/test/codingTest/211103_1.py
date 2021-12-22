import datetime
def solution(booked, unbooked):
    result = []

    currentTime = datetime.datetime(2021,11,3,0,0)

    while len(booked)!=0 and len(unbooked)!=0 :
        # 업무처리하는동안 고객이 왔는지 확인
        ct = currentTime.strftime('%H')+currentTime.strftime('%M');
        f1 = booked[0][0].split(':')
        f2 = unbooked[0][0].split(':')
        print(currentTime,int(ct),int(f1[0]+f1[1]),int(f2[0]+f2[1]))

        # 예약 고객이 왔다면 예약 고객 먼저 처리
        if(int(ct)>= int(f1[0]+f1[1])):
            result.append(booked[0][1])
            del booked[0]
        # 그냥 고객이 왔다먄 그냥 고객 처리
        elif(int(ct)>= int(f2[0]+f2[1])):
            result.append(unbooked[0][1])
            del unbooked[0]
        # 아무도 안왔다면 그 다음 빠른 값 처리
        else :
            if(int(f1[0]+f1[1]) <= int(f2[0]+f2[1])) :
                fistTime = f1
                result.append(booked[0][1])
                del booked[0]
            else :
                fistTime = f2
                result.append(unbooked[0][1])
                del unbooked[0]
            # 현재 시간에는 손님이 없으므로 다음 손님의 시간까지 점프
            currentTime = datetime.datetime(2021,11,3,int(fistTime[0]),int(fistTime[1]))
        #고객 업무처리(10분)
        currentTime = currentTime+datetime.timedelta(minutes=10)

    return result + list(map(lambda x:x[1], booked)) + list(map(lambda x:x[1], unbooked))