def balanced(expression):
    #your code goes here
    l=[]
    for i in expression:
        if i=='(':
            l.append('(')
        elif i=='[':
            l.append('[')
        elif i=='{':
            l.append('{')
        
        if i==')':
            if l.count('(')==0:
                return "Invalid"
            else:
                l.pop()
        if i==']':
            if l.count('[')==0:
                return "Invalid"
            else:
                l.pop()
        if i=='}':
            if l.count('{')==0:
                return "Invalid"
            else:
                l.pop()
                
    if l.count('(')==0 and l.count('[')==0 and l.count('{')==0:
        return "Valid"
    else:
        return "Invalid"

for i in range(int(input())):
    print(balanced(input()))
