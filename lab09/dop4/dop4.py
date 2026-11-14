def fastpow(n):
    def build_expr(k):
        if k == 0:
            return "1"
        if k == 1:
            return "x"
        if k % 2 == 0:
            sub = build_expr(k // 2)
            return f"{sub}**2" if sub == "x" else f"({sub})**2"
        else:
            return f"x*({build_expr(k - 1)})"

    s = build_expr(n)
    return lambda x: eval(s)


if __name__ == '__main__':
    pow10 = fastpow(10)
    print("pow10(2) =", pow10(2))
    print("pow10(3) =", pow10(3))
