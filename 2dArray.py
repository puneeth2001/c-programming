matrix=[]
for i in range(6):
	matrix.append([int(j) for j in input().split()])
print(matrix)
a=[]
for i in range(0,4):
	s=0
	for j in range(0,4):
		s=matrix[i][j]+matrix[i][j+1]+matrix[i][j+2]+matrix[i+1][j+1]+matrix[i+2][j]+matrix[i+2][j+1]+matrix[i+2][j+2]
		a.append(s)
print(a)