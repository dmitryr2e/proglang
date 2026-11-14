def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper


@toint
def add(a, b):
    return a + b


@toint
def area(width, height):
    return width * height


if __name__ == '__main__':
    print("add('15', '27') =", add('15', '27'))
    print("area('4', 5.9) =", area('4', 5.9))
