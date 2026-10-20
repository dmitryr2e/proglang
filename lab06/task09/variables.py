import string

k = 1
for letter in string.ascii_lowercase:
    for i in range(100):
        globals()[letter + str(i)] = k
        k += 1

print(a0, a99, b0, z98, z99)
print(len([v for v in globals() if len(v) <= 3 and v[0] in string.ascii_lowercase and v[1:].isdigit()]))
