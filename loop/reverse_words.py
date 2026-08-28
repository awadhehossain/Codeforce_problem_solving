s=input()
word=''
t=''
for ch in s:
    if ch !=' ':
        rd= ch + word
    else:
        t= t + word + ' '
        rd=''
t= t + word
print(t)