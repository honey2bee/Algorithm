a=int(input())
for i in range(0,a):
    s=0
    c=0
    d=list(map(int,input().split()))
    for j in range(1,d[0]+1):
        s+=d[j]
    for j in range(1,d[0]+1):
        if(d[j]>s/d[0]):
            c+=1
    print("%.3f" %(c/d[0]*100),end="")
    print("%")