def fib(n):
    def _fib_pair(k):
        if k == 0:
            return (0, 1)
        a, b = _fib_pair(k // 2)
        c = a * (2 * b - a)
        d = a * a + b * b
        if k % 2 == 0:
            return (c, d)
        else:
            return (d, c + d)

    return _fib_pair(n)[0]


if __name__ == '__main__':
    print("fib(10) =", fib(10))
    print("fib(1000) =", fib(1000))
