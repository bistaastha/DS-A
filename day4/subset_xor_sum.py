print("Enter array")

s = input()

arr = s.split(" ")
l = []
for i in arr:
    l.append(int(i))

r = [l[i:j] for i in range(len(l) + 1) for j in range(len(i))]
xor = []
for k in r:
    res = 0
    if len(k) > 0:
        for j in k:
            res ^= j
    xor.append(res)
print(str(r))
print(str(xor))
sum = 0
for i in xor:
    sum += i

print(sum)