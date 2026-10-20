a = 'Hello world'
b = a
c = a[:]
print(id(a), id(b), id(c), b is a, c is a)

l = [1, 2, 3]
m = l
n = l[:]
print(id(l), id(m), id(n), m is l, n is l)
