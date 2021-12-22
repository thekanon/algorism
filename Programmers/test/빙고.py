def solution(board, nums):
    answer = 0
    checkData(board,nums)
    return (checkGaro(board))+(checkSero(board))+(checkDegak(board))

def checkData(board,num):
    for i in board :
        for j in num :
            # print(j)
            if j in i:
                i[i.index(j)]=-1;
def checkGaro(board):
    cnt = 0
    for i in board :
        # if -1 in i :
        # print(i)
        if(i.count(-1) == len(board[0])):
            cnt += 1
        # print(i)
        # for j in range(len(board[i])):
        #     # if()
    return cnt

def checkSero(board):
    b = [];
    for i in range(len(board)):
        b.append( [x[i] for x in board] )
    return checkGaro(b)

def checkDegak(board):
    b = [[],[]];
    cnt = 0;
    for i in range(len(board)):
        b[0].append(board[i][i])
    cnt += checkGaro(b)
    lastIdx =  len(board)-1
    for i in range(len(board)):
        b[1].append(board[i][lastIdx])
        lastIdx -=1
    cnt +=checkGaro(b)
    return cnt
    


solution([[11,13,15,16],[12,1,4,3],[10,2,7,8],[5,14,6,9]], [14,3,2,4,13,1,16,11,5,15])
solution( [[6,15,17,14,23],[5,12,16,13,25],[21,4,2,1,22],[10,20,3,18,8],[11,9,19,24,7]], [15,7,2,25,9,16,12,18,5,4,10,13,20] )