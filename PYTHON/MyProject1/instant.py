class test:
    def __init__(self,x,y):
        self.i=x
        self.j=y
    def add(self):
        print(self.i+self.j)


t1=test(10,20)
t2=test(30,40)
t1.add()
t2.add()