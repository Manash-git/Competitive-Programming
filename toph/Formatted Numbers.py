n = "1171123"
print(n)
# length = len(n)
n = n[::-1]
print(n)

n= input()
temp=""
for i in range(len(n)):
    if (i)% 3 ==0 and i>0:
        temp = temp + ","
    temp = temp + n[i]
print(temp[::-1])

