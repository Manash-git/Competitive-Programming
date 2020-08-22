t = 3

t = int(input())
for i in range(t):
    x,y = input().split()
    if ((int(x)+int(y))//2)%2 ==0:
        print("Sadia will be happy.")
    else:
        print("Oops!")
         