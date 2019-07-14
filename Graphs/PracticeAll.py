# Listing Element

t = int(input())
for i in range(t):
    n = int(input())
    l1 = list(map(int,input().split()))
    total = (n+1)*(n)/2
    for j in range(n-1):
        total -= l1[j]
    print(int(total))

    
###################################


def dfs(g,N):
    visited = [False] * N
    dfs2(g,0, visited)
    
def dfs2(g,v,visited):
    visited[v] = True
    print(v, end=" ")
    for i in g[v]:
        if(visited[i] == False):
            dfs2(g,i,visited)




#User function Template for python3
def dfs(g,N):
    visited = [False]*N
    s = [0]
    visited[0] = True
    while s:
        v = s.pop()
        print(v, end=" ")
        for i in g[v]:
            if visited[i] == False:
                s.append(i)
                visited[i] = True
    # code here

        
##################################


#User function Template for python3
def bfs(g,N):
    visited = [False] * N
    q = [0]
    visited[0] = True
    while q:
        print(q[0], end=" ")
        for i in g[q[0]]:
            if visited[i] == False:
                q.append(i)
                visited[i] = True
        del q[0]

#User function Template for python3
def bfs(g,N):
    visited = [False] * N
    q = [0]
    visited[0] = True
    while q:
        v = q.pop(0)
        print(v, end=" ")
        for i in g[v]:
            if visited[i] == False:
                q.append(i)
                visited[i] = True


#User function Template for python3
def bfs(g,N):
    visited = [False]*N
    q = [0]
    visited[0] = True
    bfs2(g,visited,q)

def bfs2(g,visited,q):
    if len(q) == 0:
        return    
    v = q.pop(0)
    print(v, end=" ")
    for i in g[v]:
        if visited[i] == False:
            q.append(i)
            visited[i] = True
    bfs2(g,visited, q)


#####################################################

def topologicalSortUtil(graph,v,visited,stack): 
    visited[v] = True
    for i in graph[v]: 
        if visited[i] == False: 
            topologicalSortUtil(graph,i,visited,stack) 
    stack.insert(0,v)
  
def topoSort(n, graph): 
    visited = [False]*n 
    stack =[] 
    for i in range(n): 
        if visited[i] == False: 
            topologicalSortUtil(graph,i,visited,stack) 
    return stack
#####################################################


def findIslands(a,n,m):
    res = 0
    # dfs(a,n,m,0,0)
    for i in range(n):
        for j in range(m):
            if(a[i][j]==1):
                dfs(a,n,m,i,j)
                res += 1
    return res
                

def dfs(a,n,m,row,col):
    a[row][col] = 0
    for i in range(row-1,row+2,1):
        for j in range(col-1, col+2,1):
            if(i<0 or i>=n or j<0 or j>=m):
                continue
            if(a[i][j]==1):
                dfs(a,n,m,i,j)


#####################################################

from collections import defaultdict 
   
 
V= 30 
graph = defaultdict(list) 
        
def addEdge(u,v): 
    graph[u].append(v) 
    
def create(start,end):
    for i in range(1, V+1):
        for j in range(i+1,i+7):
            try:
                ind = start.index(i)
                continue
            except:
                pass
            
            if(j<31):
                try:
                    ind = start.index(j) 
                except:
                    dest = j
                    addEdge(i,dest)
                    continue
                dest = end[ind]
                addEdge(i,dest)

def bfs():
    steps = 1
    visited = [False]*V
    visited[0] = True
    q = [1,-1]
    while len(q):
        v = q.pop(0)
        for i in graph[v]:
            if(i == V):
                return steps
            if visited[i] == False:
                q.append(i)
                visited[i] = True
        # print(q)
        if(q[0] == -1):
            steps+=1
            q.pop(0)
            q.append(-1)
def printList():
        for i  in range(V):
            print(i,'->',' -> '.join([str(j) for j in graph[i]]))
                
test = int(input())
for i in range(test):
    n = int(input())
    ladders = list(map(int, input().strip().split()))
    start = [ladders[i] for i in range(0,2*n,2)] 
    end = [ladders[i] for i in range(1,2*n,2)]
    create(start,end)
    # printList()
    print(bfs())
    graph.clear()

###########################################################
dx = [-1,0,0,+1]
dy = [0,-1,+1,0]
def find(mat,vis,n,x,y):
    vis[x][y] = 1
    if(mat[x][y] == 2):
        return 1
    for i in range(4):
        x1 = x+dx[i]
        y1 = y+dy[i]
        if(x1<0 or x1>=n or y1<0 or y1>=n or mat[x1][y1]==0 or vis[x1][y1]==1):
            continue
        res = find(mat,vis,n,x1,y1)
        if res:
            return 1
    vis[x][y] = 0
    return 0

test = int(input())
for i in range(test):
    n = int(input())
    x,y = 0,0
    mat = [[] for i in range(n)]
    vis = [[0]*n for i in range(n)]
    inp = list(map(int, input().strip().split()))
    ind = inp.index(1)
    x = ind // n
    y = ind % n
    for i in range(n):
        for j in range(n):
            mat[i].append(inp[i*n+j])
    # print(mat)
    print(find(mat,vis,n,x,y))

###########################################################

for i in range(5):
    for j in range(5):
        if(j >= 4-i):
            print("*",end="")
        else:
            print(" ",end="")
    print()

#################################################

import math

dx = [-1,0,0,+1]
dy = [0,-1,+1,0]
steps = 0
dest = list()
def find(mat,vis,n,m,x,y):
    global dest,steps
    vis[x][y] = 1
    if(x == dest[0] and y== dest[1]):
        return steps
    steps+= 1
    res = 500
    for i in range(4):
        x1 = x+dx[i]
        y1 = y+dy[i]
        if(x1<0 or x1>=n or y1<0 or y1>=m or vis[x1][y1]==1 or mat[x1][y1]==0):
            continue
        res2 = find(mat,vis,n,m,x1,y1)
        if res2 != -1:
            res = min(res,res2)
    steps -= 1
    vis[x][y] = 0
    if(res == 500):
        return -1
    else:
        return res

test = int(input())
for i in range(test):
    n,m = list(map(int, input().strip().split()))
    mat = [[] for l in range(n)]
    vis = [[0]*m for l in range(n)]
    inp = list(map(int, input().strip().split()))
    for j in range(n):
        for k in range(m):
            mat[j].append(inp[m*j+k])
    dest = list(map(int, input().strip().split()))
    print(find(mat,vis,n,m,0,0))

#######################################################


def resu(n,d):
    if(n==0):
        return "0"
    res = ""
    res += "-" if(n<0 or d<0) else ""
    
    n = abs(n)
    d = abs(d)
    
    res += str(n//d)
    r = n%d
    
    if(r==0):
        return res
    res+= "."
    
    dic = {}
    index = 0
    repeating = False
    while(r>0):
        if (r in dic):
            index = dic[r]
            repeating = True
            break
        else:
            dic[r] = len(res)
        r *= 10
        res += str(r//d)
        r = r%d
    
    if(repeating):
        temp = res[:index]
        temp += "("
        temp += res[index:]
        temp += ")"
        return temp
    
    return res
    

test = int(input())
for i in range(test):
    n = int(input())
    d = int(input())
    print(resu(n,d))

###################################
t = int(input())
record = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
ans = []
while t > 0:
    n = int(input())
    temp = n
    ans = []
    while n>0:
        ans.append(record[n%62])
        n = n // 62
    ans.reverse()
    print(''.join(ans))
    print(temp)
    t -= 1

################################

t = int(input())
for j in range(t):
    n = int(input())
    inp = input()
    h1 = [0]*26
    h2 = [0]*26
    for i in inp:
        if(ord(i) > 95):
            h1[ord(i)-ord('a')]+= 1
        else:
            h2[ord(i)-ord('A')]+= 1
    sm = ""
    lg = ""
    for i in range(26):
        sm += str(chr(i+97)) * h1[i]
    for i in range(26):
        lg += str(chr(i+65)) * h2[i]
    res = ""
    for i in range(n):
        if(ord(inp[i]) > 95):
            res += sm[0]
            sm = sm[1:]
        else:
            res += lg[0]
            lg = lg[1:]
    print(res)


#################################
a = [5,10,8,9]
x = 8
m = 0
for i in range(len(a)):
    for j in range(i+1,len(a)+1):
        count = 0
        for k in range(i,j):
            if(a[k]>=x):
                count += 1
        if(count > (j-i)/2):
            m = max(m,count)
        
print(m)
