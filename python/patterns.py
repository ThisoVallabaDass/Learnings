def pattern1(n):
    for i in range(1,n+1):
        print("*"*n)
def pattern2(n):
    for i in range(1,n+1):
        print("*"*i)  
def pattern3(n):
    for i in range(n,0,-1):
        print("*"*i)       
def pattern4(n):   
    for i in range(1,n+1):
        for j in range(1,i+1):
         print(i,end="")  
        print() 
def pattern5(n): 
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(j,end="")
        print()       
def pattern6(n): 
    for i in range(1,n+1):
        for j in range(0,n-i):
            print(" ",end="")
        for j in range(0,2*i-1):
            print("*",end="")
        print()  
def pattern7(n):
    for i in range(0,n):
        for j in range(0,i):
            print(" ",end="")
        for j in range(0,2*n-2*i-1):
            print("*",end="")
        print()                  
def pattern8(n):
    for i in range(1,2*n):
        if(i<=n):
            start=i
        else:
            start=2*n-i    
        for j in range(1,start+1):
            print("*",end="")
        print()      
def pattern9(n):
    for i in range(1,n+1):
        if(i%2==0):
            count=0
        else:
            count=1
        for j in range(1,i+1):
            print(count,end="")
            count=1-count
        print()                
def pattern10(n):
    count=1
    for i in range(1,n+1): 
        for j in range(i):
            print(count," ",end="")
            count=count+1
        print()    
n=int(input())
#pattern1(n)
#pattern2(n)
#pattern3(n)
#pattern4(n)
#pattern5(n)
#pattern6(n)
#pattern7(n)
#pattern8(n)
#pattern9(n)
pattern10(n)