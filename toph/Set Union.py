# n = {1,2,5}
# print(type(n))
# l= [1,5,6]
# print(type(set(l)))

# print(n | set(l))
# res = n | set(l)
# for i in res:
#     print(i,end=" ")

n,m = input().split()
x = [int(i) for i in str(input()).split()]
y = [int(i) for i in str(input()).split()]
x= set(x)
y= set(y)
# print( set(x)| set(y))
res = sorted(list(x.union(y)))
print(res)
for i in res:
    print(i,end=" ")
    
# for i in range(len(res)-1):
#     print(res[i], end=" ")

# for i in range(len(res)):
# 	if i==len(res)-1:
# 		print(res[i])
# 	else:
# 		print(res[i],end=" ")