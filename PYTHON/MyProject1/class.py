class test:
    count=0
    def __init__(self):
        test.count+=1
    def show(self):
        print(test.count,self.count)
t1=test()
t1.show()

