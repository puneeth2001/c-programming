t=int(input())
for i in range(t):
    n=int(input())
    a=n
    l=[]
    while(n!=0):
        r=int(n%10)
        l.append(r)
        n=int(n/10)
    c=0
    for i in l:
        if(i==0):
            continue
        elif(a%i==0):
            c+=1
    print(c)
    