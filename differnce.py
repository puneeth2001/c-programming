n=int(input())
a=list(map(int,input().split()))
a.sort()
b=[]
for i in range(0,len(a)-1):
	diff=abs(a[i]-a[i+1])
	b.append(diff)
print(b,min(b))