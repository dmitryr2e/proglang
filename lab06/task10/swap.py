import time

for n in (10, 10**5, 10**7):
    a = list(range(n))
    b = list(range(n, 2 * n))
    ida, idb = id(a), id(b)
    a, b = b, a
    print(n, 'id обменялись:', id(a) == idb and id(b) == ida)
    t = time.perf_counter()
    for _ in range(1000):
        a, b = b, a
    t = time.perf_counter() - t
    print('   время на 1000 обменов: %.6f c' % t)
