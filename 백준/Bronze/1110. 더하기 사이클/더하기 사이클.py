a=input()
if len(a)==1:a+="0"
s,d=int(a[0]),int(a[1])
c=0
while True:
    s,d=d,(s+d)%10
    c+=1
    if s==int(a[0]) and d==int(a[1]):
        print(c)
        break
    