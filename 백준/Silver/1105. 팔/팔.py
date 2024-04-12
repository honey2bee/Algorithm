L, R= input().split()

count=0
if len(L)==len(R):
    for i,j in zip(L, R):
        if i!=j:
            break
        if i=='8':
            count+=1
print(count)