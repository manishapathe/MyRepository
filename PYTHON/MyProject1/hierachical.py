class a:
    def setdata(self):
        self.x=int(input("enter no1:"))
        self.y=int(input("enter no2:"))
    def showdata(self):
        print(self.x,self.y)

class b(a):
    def add(self):
        self.z=self.x+self.y
    def showaddition(self):
        print(self.z)

class c(a):
    def sub(self):
        self.z=self.x-self.y
    def showsub(self):
        print(self.z)

ob1=b()
ob2=c()
ob1.add()
ob1.showaddition()
ob2.sub()
ob2.showsub()