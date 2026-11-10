a = [int(t) for t in input().split()]
for x in a:
    if x < 0:
        print(x)
        break
else:
    print("all non-negative")
