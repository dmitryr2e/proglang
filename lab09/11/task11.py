def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper


if __name__ == '__main__':
    add_ints = toint(lambda a, b: a + b)
    print("add_ints('10', '20') =", add_ints('10', '20'))

    max_int = toint(max)
    print("max_int('5', '12', '3') =", max_int('5', '12', '3'))
