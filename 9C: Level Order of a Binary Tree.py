#By Lakshmana Reddy
#follow me for more :)
#share :D


tree = {}

totalnodes = int(input())
root = input()
for i in range(totalnodes-1):
    a = input().split()
    if a[0] in tree:
        if a[1] == 'L':
            tree[a[0]].insert(0, a[2])
        else:
            tree[a[0]].append(a[2])
    else:
        tree[a[0]] = [a[2]]

l = [root]
ls = []
node_count = 1
print('Level Order Traversal:'+root,end=' ')
while node_count <totalnodes:
    ls=[]
    for i in l:
        try:
            for k in tree[i]:
                print(k, end=' ')
                ls.append(k)
                node_count += 1
        except:
            print('',end='')
            node_count +=1
    l = ls





