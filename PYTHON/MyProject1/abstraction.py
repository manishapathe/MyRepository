from abc import ABC,abstractmethod
class A(ABC):
    def show(self):
        print("this is a")
    @abstractmethod
    def add(self,x,y):
        pass
class B(A):
    def dis(self):
        print("This is B")

    def add(self, x, y):
        print(x+y)
ob=B()
ob.show()
ob.dis()
ob.add(10,20)
