import os
def solution(rows, columns, max_virus, queries):
    answer = [[]]
    table = []
    checkTable = []

    for i in range(rows) :
        table.append([])
        checkTable.append([])
        for j in range(columns) :
            table[i].append(0)
            checkTable[i].append("True")
    
    print_table(table)

    for num,i in enumerate(queries) :
        #print("========================================Query("+str(i)+str(num)+")========================================")
        virus_set(i[0],i[1],table,max_virus,checkTable)
        clearCheckTable(checkTable,rows, columns)

    print_table(table)
    return table
def clearCheckTable(table,rows, columns):
    for i in range(rows) :
        for j in range(columns) :
            table[i][j] ="True"

def virus_set(row,col,table,max_virus,checkTable):
    # #print("virus_set")
    # #print(row,col,"!")
    # print_table(checkTable)
    # print_table(table)
    # 현재 좌표가 유효한 좌표인지 체크
    max_row = len(table)
    max_col = len(table[0])
    if(row> max_row or col>max_col or row<=0 or col<=0) :
        return
    if( checkTable[row-1][col-1] == "False"):
        return
    row = row-1
    col = col-1


    # 우선 현재 위치의 값이 max_virus보다 작은지 확인
    if( table[row][col] < max_virus ) :
        table[row][col]=table[row][col]+1
        checkArr(row+1,col+1,checkTable)
    else :
        row = row+1
        col = col+1

        checkArr(row,col,checkTable)
        virus_set(row+1,col,table,max_virus, checkTable)
        virus_set(row-1,col,table,max_virus, checkTable)
        virus_set(row,col+1,table,max_virus, checkTable)
        virus_set(row,col-1,table,max_virus, checkTable)
    # print_table(table)
    return table

def checkArr(row,col,checkTable) :
    # 현재 좌표가 유효한 좌표인지 체크
    max_row = len(checkTable)
    max_col = len(checkTable[0])

    if(row> max_row or col>max_col or row<=0 or col<=0) :
        return
    # #print("checkArr : "+str(row)+" , "+str(col))
    print_table(checkTable)
    checkTable[row-1][col-1]="False"


def print_table(table) : 
    # for i in range(len(table)) :
    #     #print(table[i])
    # #print("")
    return

rows = 3 	 
columns = 4 	 
max_virus = 2 	 
# queries = [[3,2],[3,2],[2,2],[3,2],[1,4],[3,2]]
queries = [[3,2],[3,2],[2,2],[3,2],[1,4],[3,2],[2,3],[3,1]] 	 
queries = [[3,2],[3,2],[2,2],[3,2],[1,4],[3,2],[2,3],[3,1]]
result = [[0,2,1,1],[2,2,2,1],[2,2,2,1]] 
solution(rows, columns, max_virus, queries)