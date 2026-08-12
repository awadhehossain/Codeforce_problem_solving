s = input()

numbers = list(map(int, s.split("+")))
numbers.sort()

print("+".join(map(str, numbers)))