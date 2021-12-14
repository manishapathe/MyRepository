class test:
    """
    this is test class
    this show how instant varible works
    """
    def __init__(self,x,y):
        """

        :param x:this is value of i
        :param y: this is value of j
        """
        self.i=x
        self.j=y
    def add(self):
        """

        :return:gives addition of 2 int
        """
        print(self.i+self.j)
        print(test. __name__)
        print(test. __module__)
        print(test. __bases__)

t1=test(10,20)
print(t1. __dict__)
print(dir(t1))
print(test. __doc__)
print(t1. __init__.__doc__)
t1.add()
