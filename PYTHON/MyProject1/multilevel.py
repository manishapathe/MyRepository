class student:
    def setdata(self):
        self.name=input("enter name:")
        self.id=float(input("enter id:"))
    def showdata(self):
        print(self.id,self.name)

class mark(student):
    def setmarks(self):
        self.m1=float(input("enter mark1:"))
        self.m2=float(input("enter mark2:"))
    def showmarks(self):
        print(self.m1,self.m2)

class result(mark):
    def set(self):
        self.setdata()
        self.setmarks()
    def diplayresult(self):
        self.showdata()
        avg=(self.m1+self.m2)/2
        self.showmarks()
        print("average of marks:",avg)

ob1=result()
ob1.set()
ob1.diplayresult()


