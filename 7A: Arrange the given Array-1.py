#by Lakshmana Reddy
#follow for more :)
n=int(input())

ls=list(map(int,input().split()))

k=int(input())

for i in range(0,k):

		ls[ls.index(min(ls[i:]))],ls[i]=ls[i],ls[ls.index(min(ls[i:]))]

		

for i in ls:

	print(i,end=' ')

	
