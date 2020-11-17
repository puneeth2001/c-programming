n=int(input())
a=list(map(int,input().split()))
d,m=map(int,input().split())
ans=[]
for i in range(0,n):
	s=0
	if(i+m<=n):
		for j in range(i,i+m):
			s+=a[j]
			print("hi",s)
			i=j
			print(i)
	ans.append(s)
print(ans)
print(ans.count(d))