n = int(input())

for i in range(n):
    k = int(input())
    ar = list(map(int, input().strip().split(' ')))
        
l = set(ar)
print(len(l))