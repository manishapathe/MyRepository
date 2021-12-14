class test:
    msg="this is class variable"
    @classmethod
    def class_method(cls):
        print(cls.msg)
test.class_method()