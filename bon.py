n,k=map(int,input().split())
a=list(map(int,input().split()))
b=int(input())
x=a[k]
s=sum(a)
s=s-x
actual=s//2
if(actual==b):
	print("Bon Appetit")
else:
	print(b-actual)
