n=int(input())

ls=list(map(int,input().split()))

i=0

while ls[i]<=ls[-1]:

	i+=1

ls.insert(i,ls[-1])

ls.pop()

for i in ls:

	print(i,end=" ")

	
