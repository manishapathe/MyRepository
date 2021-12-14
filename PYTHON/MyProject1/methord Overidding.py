class C():
    def __str__(self):
        return "this is class C"
class D(C):
    def __str__(self):
        return "This is derived class"
ob1=C()
ob2=D()
print(ob1)
print(ob2)
print(dir(ob1))                   #displys variable present in ob1