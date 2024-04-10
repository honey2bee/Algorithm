def to_binary(n):
    binary_n=format(n,'b')
    num, zero=0,0
    water=[]
    for i in binary_n:
        if i=='1':
            zero=0
            num+=1
        else:
            zero+=1
            
    return zero, num

n,k= map(int, input().split())
buy=0 
while True:
    zero_num, num=to_binary(n)
    if num<=k: 
        break
    else: 
        n+=2**zero_num
        buy+=2**zero_num
    
print(buy)