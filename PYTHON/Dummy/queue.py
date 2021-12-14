rear=-1
front=0
queue=[]
max=5
def insert(x)
    global rear
    if rear=max:
        print("queue is full")
    else:
        rear=rear+1
        queue.insert(rear x)
        print("inserted item is",x)
def delete()
    global front
    if front==-1:
        print("queue is empty")
    else:

        front.delete(front)
        front=front+1
        print("deleted item is",front)

insert(10)
insert(20)