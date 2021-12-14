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

ob1=mark()
ob1.setdata()
ob1.setmarks()
ob1.showdata()
ob1.showmarks()