n = int(input())
if(n<2 or n> 100):
    print("Invalid Input")
else:
    fir = 10
    sec = 10
    for i in range(n):
        s1 = ""
        for j in range(0,n):
            if(j < i):
                s1 += "**"
            else:
                s1 += str(fir)
                fir += 10
        for j in range(0,n-i):
            s1 += str(sec + (n-i)**2 * 10)
            sec += 10
        print(s1[:-1]) 

########################################


n = int(input())
rad = list(map(int, input().strip().split()))
mx = max(rad)
mn = min(rad)
if(n < 1 or n> 100000):
    print("Invalid Input")
elif(mn <1 or mx > 1000000000000000000):
    print("Invalid Input")
else:
    rad.sort(reverse = True)
    visi = 0
    for i in range(n):
        m1 = rad[i]
        flag = False
        if(m1 == -1):
            continue
        for j in range(i+1,n):
            if(m1 > rad[j] and rad[j] != -1):
                m1 = rad[j]
                rad[j] = -1
                flag = True
        if(flag == False):
            break
        else:
            visi += 1
            rad[i] = -1
    for i in range(n):
        if(rad[i] != -1):
            visi += 1
    print(visi)

#########################################

n = int(input())
t = int(input())
part = [[] for i in range(n)]
for i in range(n):
    inp = input()
    part[i].extend(map(int,inp.split()))
dist = [[0]*(t+1) for i in range(n)]
for i in range(len(part)):
    for j in range(t):
        dist[i][j+1] = dist[i][j] + part[i][j]*part[i][t]
res = [0]*n
# print(dist)
for i in range(2,t+1,2):
    l1 = [j[i] for j in dist]
    m1 = max(l1)
#     print(m1)
    for k in range(len(dist)):
        if(dist[k][i]==m1):
            res[k] += 1

m2 = max(res)
for i in range(len(res)):
    if(res[i]==m2):
        print(i+1)
        break
#############################

n = int(input())
if(n<1 and n > 3999):
    print("Invalid Input")
else:
    values = {"C":12, "D": 13, "I": 18, "L":21, "M": 22, "V":31, "X": 33}
    while (n>0 and n < 4000):
        roman = ""
        base = 0
        temp = n
        n = 0

        thou = {0: "", 1: "M", 2: "MM", 3: "MMM"}
        hund = {0: "", 1: "C", 2: "CC", 3: "CCC", 4: "CD", 5: "D", 6: "DC", 7: "DCC", 8:"DCCC", 9: "CM"}
        tens = {0: "", 1: "X", 2: "XX", 3: "XXX", 4: "XL", 5: "L", 6: "LX", 7: "LXX", 8:"LXXX", 9: "XC"}
        ones = {0: "", 1: "I", 2: "II", 3: "III", 4: "IV", 5: "V", 6: "VI", 7: "VII", 8:"VIII", 9: "IX"}
        roman = thou[temp//1000]
        temp = temp%1000
        roman += hund[temp//100]
        temp = temp %100
        roman += tens[temp//10]
        temp = temp %10
        roman += ones[temp]

        romanList = ''.join(sorted(roman))

        base = values[romanList[-1]] + 1

        l = len(roman) -1
        for i in range(len(roman)):
            n += values[roman[i]]*(base**(l-i))
    print(n)

################################################

t = int(input())
if(t<1 or t> 50):
    print("Invalid Input")
else:    
    ans = []
    for i in range(t):
        n , k = list(map(int, input().strip().split()))
        if(n<1 or n> 100 or t<1 or t> 100):
            print("Invalid Input")
        else:
            tick = list(map(int, input().strip().split()))
            m1 = max(tick)
            if(m1<1 or m1> 1000000000):
                print("Invalid Input")
            else:
                s1 = sum(tick)
                a1 = s1 // n
                if(s1 % n != 0):
                    a1 += 1
                temp = tick[i]
                for i in range(len(tick)-1):
                    if(tick[i] > a1):
                        if(tick[i]-a1 <temp):
                            if(tick[i]-a1 <= k):
                                count = tick[i] - a1
                                temp = tick[i+1]
                                tick[i+1] += count
                                tick[i] = a1
                            else:
                                count = k
                                temp = tick[i+1]
                                tick[i+1] += count 
                                tick[i] -= count
                        else:
                            if(temp <= k):
                                count = temp
                                temp = tick[i+1]
                                tick[i+1] += count
                                tick[i] -= count
                            else:
                                count = tick[i]-k
                                temp = tick[i+1]
                                tick[i+1] += count 
                                tick[i] -= count
                    else:
                        temp = tick[i+1]
                m1 = max(tick)
                ans.append(m1)
    for i in ans:
        print(i)
