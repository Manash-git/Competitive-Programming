# n = int(input())
# inputarr = [int(i) for i in str(input()).split()]

inputarr = [4, 2, 7]
total=0
for i in range(len(inputarr)):
    total = total + inputarr[i]
    print(total/(i+1))
    

