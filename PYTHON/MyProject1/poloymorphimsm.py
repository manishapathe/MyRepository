class A():
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def __add__(self, other):
        temp=A(0,0)
        temp.x=self.x+other.x
        temp.y=self.y+other.y
        return temp
    def show(self):
        print(self.x,self.y)
p1=A(10,20)
p2=A(60,70)
p3=p1+p2
p3.show()