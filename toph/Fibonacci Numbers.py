n= int(input())

f0 = 1
f1= 1
fib = 0

if n==1 or n==2:
    print(1)
else:
    for i in range(n-2):
        fib = f0 + f1
        f0=f1
        f1= fib
    print(fib)

