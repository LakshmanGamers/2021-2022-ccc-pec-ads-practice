tree = {}

totalnodes = int(input())
root = input()
for i in range(totalnodes-1):
    a = input().split()
    if a[0] in tree:
        if a[1] == 'L':
            tree[a[0]][0]=a[2]
        else:
            tree[a[0]][1]=a[2]
    else:
        if a[1]=='L':
            tree[a[0]] = [a[2],0]
        else:
            tree[a[0]]=[0,a[2]]

l = [root]
ls = []
val=root
node_count = 1

def check(val):
    if val==0:
        return
    try:
        check(tree[val][0] if val in tree else 0)
    except:
        check(0)
    print(val if val!=-1 else '',end=' ')
    try:
        check(tree[val][1] if val in tree else 0)
    except:
        check(0)

def preorder(val):
    if val==0:
        return
    print(val if val!=0 else '',end=' ')
    try:
        preorder(tree[val][0] if val in tree else 0)
    except:
        print('',end='')

    try:
        preorder(tree[val][1] if val in tree else 0)
    except:
        print('',end='')
def postorder(val):
    if val==0:
        return
    try:
        postorder(tree[val][0] if val in tree else 0)
    except:
        print('',end='')

    try:
        postorder(tree[val][1] if val in tree else 0)
    except:
        print('',end='')
    print(val if val!=0 else '',end=' ')

print('Preorder:',end='')
preorder(root)
print()
print('Inorder:',end='')
check(root)
print()
print('Postorder:',end='')
postorder(root)
print()
