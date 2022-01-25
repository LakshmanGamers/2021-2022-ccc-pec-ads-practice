ls=[]
for i in range(int(input())):
    l=list(map(int,input().split()))
    if l[0]==1:
        ls.insert(0,l[1])
    elif l[0]==2:
        if len(ls)!=0:
            ls.pop(0)
        else:
            print('Invalid')
    elif l[0]==3:
        if len(ls)!=0:
            print(ls[0])
        else:
            print('Invalid')
    else:
        if len(ls)!=0:
            print(0)
        else:
            print(1)
        
