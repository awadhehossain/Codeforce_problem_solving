s=input()
s=s.upper()
count=0
for i in range(len(s)):
    if('A'<=s[i]<='Z'):
        if i==0 or not('A'<=s[i-1]<='Z'):
            count=count+1
print(count)