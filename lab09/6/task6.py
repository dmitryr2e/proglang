def gen(n):
    yield n
    while n != 1:
        n = n // 2 if n % 2 == 0 else 3 * n + 1
        yield n


if __name__ == '__main__':
    print(*gen(7))
