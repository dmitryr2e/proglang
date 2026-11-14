words = ['hello', 'world', 'apple', 'hi', 'zebra']
ans = min(words, key=lambda s: (-len(s), s))
print(ans)
