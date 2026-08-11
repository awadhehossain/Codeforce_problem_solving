n,a,b=map(int,input().split())
def digit_sum(n):
    n=abs(n)
    if n<10:
        return n
    return n % 10 + digit_sum(n//10)
 
sum=0  
for i in range(1,n+1):
    digit_SUM=digit_sum(i)
    if(a<=digit_SUM<=b):
        sum=sum+i
print(sum)   
 