s=input()

op="+-*/"

st=[]

for i in s:

	if i in op:

		a=st.pop()

		b=st.pop()

		st.append(str(eval(b+i+a)))

	else:

		st.append(i)

print(st.pop())

	
