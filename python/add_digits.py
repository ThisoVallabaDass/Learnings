def add_digits(n):
    sum=0
    while(n):
        sum=sum+n%10
        n=n//10
    return sum   
n=int(input()) 
print(add_digits(n))        