lst = ['hello', 'hell', 'bye', 'world', 'bybye']
lst.sort(key=lambda s: (len(s), s))
print(lst)
