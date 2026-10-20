import sys


def sumint():
    s = 0
    # переменные, введенные в IDLE, лежат в словаре модуля __main__
    for value in vars(sys.modules['__main__']).values():
        if type(value) is int:      # type, а не isinstance: bool - тоже int
            s += value
    return s
