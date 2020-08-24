n= int(input)

if n==1:
    print("No")
elif n==2:
    print("Yes")
else:
    flag=0
    for i in range(2,(n//2)+1):
        
        if n%i ==0:
           print("No")
           flag=1
           break
    if flag==0:print("Yes")    
            