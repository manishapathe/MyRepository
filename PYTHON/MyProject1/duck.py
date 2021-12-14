class human():
    def show(self):
        print("Hey")
class frog():
    def show(self):
        print("Torw Trow")
class cat():
    def dis(self):
        print("Meow Meow")
def add(ob):
    if hasattr(ob,'show'):
        ob.show()
    else:
        ob.dis()
a=human()
b=frog()
c=cat()
add(a)
add(b)
add(c)
