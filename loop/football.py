s = input()

count0 = 0
count1 = 0

for i in range(len(s)):
    if s[i] == '0':
        count0 += 1
        count1 = 0
    else:
        count1 += 1
        count0 = 0

    if count0 >= 7 or count1 >= 7:
        print("YES")
        break
else:
    print("NO")