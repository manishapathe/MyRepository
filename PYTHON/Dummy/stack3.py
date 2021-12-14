top=-1
stack=[]
max=5
def push(x):
    global top
    if top>=max-1:
        print("stack is overflow....")
    else:
        top=top+1
        stack.insert(top,x)
        print("pushed item is",x)
def pop():
    global top
    if top==-1:
        print("stack underflow")
    else:
        print("poped item is",stack[top])
        top=top-1
def disp():

    i=top
    while i>=0:
        print(stack[i])
        i=i-1
push(10)
push(20)
push(30)
push(40)
push(50)
pop()
disp()
