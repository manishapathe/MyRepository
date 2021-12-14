rear=-1
front=0
q=[]
max=5
def insert(x):
    global rear
    if rear==max-1:
        print("queue is full")
    else:
        rear+=1
        q.insert(rear,x)
        print("inserted item is",q[rear])
def delete():
    global front
    if front==rear:
        print("queue is empty")
    else:
        print("deleted item is ",q[front])
        front+=1
def disp():
    print(front)
    i=front
    while i<=rear:
        print(q[i])
        i=i+1

insert(10)
insert(20)
insert(30)
insert(40)
insert(50)

delete()

disp()