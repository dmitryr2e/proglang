x = [int(t) for t in input().split()]
i = 0
while i < len(x) - 1 and i <= x[i] <= 2*i: #еще можно чрере and x[i] >= i and x[i] <= 2*i
   i += 1
print(i)