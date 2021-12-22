def solution(tickets):
    routes = {}
    for t in tickets:
        routes[t[0]] = routes.get(t[0], []) + [t[1]]
    for r in routes:
        routes[r].sort(reverse=True)
    stack = ["ICN"]
    path = []
    while len(stack) > 0:
        top = stack[-1]
        if top not in routes or len(routes[top]) == 0:
            path.append(stack.pop())
        else:
            stack.append(routes[top][-1])
            routes[top] = routes[top][:-1]
    return path[::-1]

    # while True:
    #     top = stack[-1]
    #     if len(routes.get(top, [])) == 0:
    #         stack.pop()
    #     else:
    #         stack.append(routes.get(top).pop())
    #     if len(stack) == len(tickets) + 1:
    #         return stack

print(solution([["ICN", "JFK"], ["HND", "IAD"], ["JFK", "HND"]]))
# print(solution([["ICN", "SFO"], ["ICN", "ATL"], ["SFO", "ATL"], ["ATL", "ICN"], ["ATL", "SFO"]]))


def solution(tickets):
    routes = {}
    for t in tickets:
        routes[t[0]] = routes.get(t[0], []) + [t[1]]
    print(routes)
    for r in routes:
        routes[r].sort(reverse=True)
    stack = ["ICN"]
        
    while True:
        #스택 맨 끝에서 시작
        top = stack[-1]
        # 라우터에서 현재 위치에 도착 공항이 없다면 해당 값은 빼버리고 그 다음 값으로 시작
        if len(routes.get(top, [])) == 0:
            stack.pop()
        # 해당 공항에 도착공항이 있다면 해당 값을 stack에 넣어줌 
        else:
            print(routes.get(top)[-1])
            stack.append(routes.get(top).pop())
        if len(stack) == len(tickets) + 1:
            return stack