t=int(input())
for i in range(t):
	n,k=map(int,input().split())
	for i in range(k):
		for i in range(2,n+1):
			if(n%i==0):
				n+=i
				break
	print(n)		