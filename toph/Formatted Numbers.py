'''
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

n = 1171123
# print(n//1000)
# print(n%1000)

while n >=100:
    print(n%1000,end="\n")
    n= n//1000
print(n)   
'''
n = 1171123

n = int(input())
print("{:,}".format(n))
