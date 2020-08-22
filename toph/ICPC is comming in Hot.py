import collections

# a = "GiniGinaProtijayi"

n = "1213"

# n = input()
aa = collections.Counter(n).most_common(1)[0]
print(aa)
aa = collections.Counter(n).most_common(3)
print(aa)
aa = collections.Counter(n).most_common(3)[2]
print(aa)
# print(int(aa[0]))