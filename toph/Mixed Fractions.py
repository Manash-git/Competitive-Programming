# x= int(x)
# y= int(y)
# x=11
# y = 5
# print(x//y)
# print(x%y)


x,y = input().split()
res = int(x)//int(y)
rem = int(x) % int (y)
print(res,rem,int(y))