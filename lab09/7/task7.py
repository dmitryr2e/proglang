def every_other(seq):
    for i, item in enumerate(seq):
        if i % 2 == 0:
            yield item


if __name__ == '__main__':
    print(*every_other([10, 20, 30, 40, 50]))
    print(*every_other(range(10)))
    print(*every_other(iter(range(10))))
