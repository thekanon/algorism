import datetime
booked = [["09:55", "hae"], ["10:05", "jee"]]
unbooked = [["10:04", "hee"], ["14:07", "eom"]]
result = []

currentTime = datetime.datetime(2021,10,26,0,0)

while len(booked)!=0 and len(unbooked)!=0 :
    # 예약 고객 업무처리(10분)
    currentTime = currentTime+datetime.timedelta(minutes=10)
    # 업무처리하는동안 고객이 왔는지 확인
    ct = currentTime.strftime('%H')+currentTime.strftime('%M');
    # 예약 고객이 왔다면 예약 고객 먼저 처리
    f1 = booked[0][0].split(':')
    f2 = unbooked[0][0].split(':')

    if(int(ct)>= int(f1[0]+f1[1])):
        result.append(booked[0][1])
        currentTime = datetime.datetime(2021,10,26,int(f1[0]),int(f1[1]))
        del booked[0]
    # 그냥 고객이 왔다먄 그냥 고객 처리
    elif(int(ct)>= int(f2[0]+f2[1])):
        result.append(unbooked[0][1])
        currentTime = datetime.datetime(2021,10,26,int(f2[0]),int(f2[1]))
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

        currentTime = datetime.datetime(2021,10,26,int(fistTime[0]),int(fistTime[1]))
print(booked)
print(unbooked)
print(result + list(map(lambda x:x[1], booked)) + list(map(lambda x:x[1], unbooked)))